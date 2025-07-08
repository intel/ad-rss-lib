# Copyright 2004-2008 Roman Yakovenko.
# Distributed under the Boost Software License, Version 1.0. (See
# accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt)

from pygccxml import declarations
from pyplusplus import code_creators
from pyplusplus import decl_wrappers

def find_out_opaque_decl( type_, ensure_opaque_decl ):
    naked_type = declarations.remove_cv( type_ )
    if not declarations.is_pointer( naked_type ):
        return None
    naked_type = declarations.remove_pointer( declarations.remove_cv( type_ ) )
    if decl_wrappers.python_traits.is_immutable( naked_type ):
        return None#immutable types could not be opaque
    declaration = None
    if declarations.is_class( naked_type ):
        declaration = declarations.class_traits.get_declaration( naked_type )
    elif declarations.is_class_declaration( naked_type ):#class declaration:
        declaration = declarations.class_declaration_traits.get_declaration( naked_type )
    else:
        return None
    if ensure_opaque_decl:
        if declaration.opaque:
            return declaration
        else:
            return None
    else:
        return declaration


class manager_t( object ):
    def __init__( self, extmodule ):
        object.__init__( self )
        self.__extmodule = extmodule
        self.__exposed_opaque_decls = {} #decl: creator
        
    def __find_out_opaque_decls( self, declaration ):
        opaque_types = []
        is_opaque_policy = decl_wrappers.is_return_opaque_pointer_policy
        if isinstance( declaration, declarations.variable_t ):
            opaque_decl = find_out_opaque_decl( declaration.decl_type, ensure_opaque_decl=True )
            if opaque_decl:
                opaque_types.append( opaque_decl )
            elif is_opaque_policy( declaration.getter_call_policies ) or is_opaque_policy( declaration.setter_call_policies ):
                opaque_decl = find_out_opaque_decl( declaration.decl_type, ensure_opaque_decl=False )
                if opaque_decl:
                    opaque_types.append( opaque_decl )
            else:
                pass
        elif isinstance( declaration, declarations.calldef_t ):
            if is_opaque_policy( declaration.call_policies ):
                opaque_decl = find_out_opaque_decl( declaration.return_type, ensure_opaque_decl=False )
                if opaque_decl:
                    opaque_types.append( opaque_decl )
            all_types = declaration.argument_types[:]
            if declaration.return_type:
                all_types.append( declaration.return_type )    
            for type_ in all_types:
                opaque_decl = find_out_opaque_decl( type_, ensure_opaque_decl=True )
                if opaque_decl:
                    opaque_types.append( opaque_decl )
        else:
            pass
        return opaque_types
            
            
    def register_opaque( self, creator, decl_or_decls ):
        opaque_decls = []
        for declaration in declarations.make_flatten( decl_or_decls ):
            opaque_decls.extend( self.__find_out_opaque_decls( declaration ) )
            
        for declaration in opaque_decls:
            opaque_type_registrator = None
            if id(declaration) not in list(self.__exposed_opaque_decls.keys()):
                opaque_type_registrator = code_creators.opaque_type_registrator_t( declaration )
                self.__exposed_opaque_decls[ id(declaration) ] = opaque_type_registrator
                self.__extmodule.adopt_declaration_creator( opaque_type_registrator )
            else:
                opaque_type_registrator = self.__exposed_opaque_decls[ id(declaration) ]
            creator.associated_decl_creators.append(opaque_type_registrator)
