import unittest
from textwrap import dedent

from markdown import markdown


class TrulySaneListTest(unittest.TestCase):
    def test_simple(self):
        raw = '''
        - Zero
        
        - One
        - Two
        '''
        expected = '<ul>\n<li>Zero</li>\n</ul>\n<ul>\n<li>One</li>\n<li>Two</li>\n</ul>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"])
        self.assertEqual(expected, actual)

    def test_comlex(self):
        raw = '''
        + attributes
         
        - customer 
          + first_name
          + family_name
          + email
        - person
          + first_name
          + family_name
          + birth_date
        - subscription_id
        
        + request
        '''
        expected = '<ul>\n<li>attributes</li>\n</ul>\n<ul>\n<li>customer <ul>\n<li>first_name</li>\n<li>family_name</li>\n<li>email</li>\n</ul>\n</li>\n<li>person<ul>\n<li>first_name</li>\n<li>family_name</li>\n<li>birth_date</li>\n</ul>\n</li>\n<li>subscription_id</li>\n</ul>\n<ul>\n<li>request</li>\n</ul>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"])
        self.assertEqual(expected, actual)

    def test_truly_insane(self):
        raw = '''
        + attributes

        - customer 
          + first_name
          + family_name
          + email
        - person
          + first_name
          + family_name
          + birth_date
        - subscription_id

        + request
        '''
        expected = '<ul>\n<li>\n<p>attributes</p>\n</li>\n<li>\n<p>customer </p>\n<ul>\n<li>first_name</li>\n<li>family_name</li>\n<li>email</li>\n</ul>\n</li>\n<li>person<ul>\n<li>first_name</li>\n<li>family_name</li>\n<li>birth_date</li>\n</ul>\n</li>\n<li>\n<p>subscription_id</p>\n</li>\n<li>\n<p>request</p>\n</li>\n</ul>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"], extension_configs={'mdx_truly_sane_lists': {'truly_sane': False}})
        self.assertEqual(expected, actual)

    def test_indent_4_with_2_data(self):
        raw = '''
        + attributes

        - customer 
          + first_name
          + family_name
          + email
        - person
          + first_name
          + family_name
          + birth_date
        - subscription_id

        + request
        '''
        expected = '<ul>\n<li>attributes</li>\n</ul>\n<ul>\n<li>customer </li>\n<li>first_name</li>\n<li>family_name</li>\n<li>email</li>\n<li>person</li>\n<li>first_name</li>\n<li>family_name</li>\n<li>birth_date</li>\n<li>subscription_id</li>\n</ul>\n<ul>\n<li>request</li>\n</ul>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"], extension_configs={'mdx_truly_sane_lists': {'nested_indent': 4}})
        self.assertEqual(expected, actual)

    def test_indent_4_with_4_data(self):
        raw = '''
        + attributes

        - customer 
            + first_name
            + family_name
            + email
        - person
            + first_name
            + family_name
            + birth_date
        - subscription_id

        + request
        '''
        expected = '<ul>\n<li>attributes</li>\n</ul>\n<ul>\n<li>customer <ul>\n<li>first_name</li>\n<li>family_name</li>\n<li>email</li>\n</ul>\n</li>\n<li>person<ul>\n<li>first_name</li>\n<li>family_name</li>\n<li>birth_date</li>\n</ul>\n</li>\n<li>subscription_id</li>\n</ul>\n<ul>\n<li>request</li>\n</ul>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"], extension_configs={'mdx_truly_sane_lists': {'nested_indent': 4}})
        self.assertEqual(expected, actual)

    def test_sane(self):
        raw = '''
        1. Ordered
        2. List
        
        * Unordered
        * List
        
        1. Ordered again
        
        Paragraph
        * not a list item
        
        1. More ordered
        * not a list item
        
        * Unordered again
        1. not a list item
        '''
        expected = '<ol>\n<li>Ordered</li>\n<li>List</li>\n</ol>\n<ul>\n<li>Unordered</li>\n<li>List</li>\n</ul>\n<ol>\n<li>Ordered again</li>\n</ol>\n<p>Paragraph\n* not a list item</p>\n<ol>\n<li>More ordered\n* not a list item</li>\n</ol>\n<ul>\n<li>Unordered again\n1. not a list item</li>\n</ul>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"])
        self.assertEqual(expected, actual)

    def test_with_code(self):
        raw = '''
        - customer 
          + first_name
          + family_name
          + email
            
        Text
        
            code
            code
            
        Text
        
          Not code
          Not code

        '''
        expected = '<ul>\n<li>customer <ul>\n<li>first_name</li>\n<li>family_name</li>\n<li>email</li>\n</ul>\n</li>\n</ul>\n<p>Text</p>\n<pre><code>code\ncode\n</code></pre>\n<p>Text</p>\n<p>Not code\n  Not code</p>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"])
        self.assertEqual(expected, actual)

    def test_ordered(self):
        raw = '''
            1. one
            2. two
            3. three
        '''
        expected = '<ol>\n<li>one</li>\n<li>two</li>\n<li>three</li>\n</ol>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"])
        self.assertEqual(expected, actual)

    def test_ordered_with_empty_lines(self):
        raw='''
        1. one

        2. two

        3. three

        '''
        expected = '<ol>\n<li>\n<p>one</p>\n</li>\n<li>\n<p>two</p>\n</li>\n<li>\n<p>three</p>\n</li>\n</ol>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"])
        self.assertEqual(expected, actual)

    def test_ordered_with_empty_lines_not_sane(self):
        raw='''
        1. one

        2. two

        3. three

        '''
        expected = '<ol>\n<li>\n<p>one</p>\n</li>\n<li>\n<p>two</p>\n</li>\n<li>\n<p>three</p>\n</li>\n</ol>'
        actual = markdown(dedent(raw), extensions=["mdx_truly_sane_lists"], extension_configs={'mdx_truly_sane_lists': {'truly_sane': False}})
        self.assertEqual(expected, actual)

if __name__ == "__main__":
    unittest.main()
