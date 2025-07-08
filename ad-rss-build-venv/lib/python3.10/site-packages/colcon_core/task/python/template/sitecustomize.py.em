import sys
if sys.prefix == @repr(current_prefix):
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = @repr(site_prefix)
