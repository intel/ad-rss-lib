# Usage of Python binding for ad_rss

Compilation of ad_rss_python (build option *BUILD_PYTHON_BINDING*)
will create ad/rss python packages inside the install/ad_rss/lib/python{2,3} folder.
The packages can be used inside any Python code to use
datatypes or call methods defined in ad_rss.

## Usage of Python binding
To use the compiled Python binding, one has to extend the current environment
to be able to use the newly created packages. Afterwards, one can import the
Python package and use it as any other Python module.
```bash
 ad_rss_python$>  export PYTHONPATH=$PYTHONPATH:<path/to/>install/ad_physics/lib/python3:<path/to/>install/ad_rss/lib/python3
 ad_rss_python$>  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<path/to/>install/ad_physics/lib:<path/to/>install/ad_rss/lib
 ad_rss_python$>  python3
 >>> import ad.rss.core
 >>> distance = ad.physics.Distance(2.0)
 >>> print(distance)
 >>> world_model = ad.rss.world.WorldModel()
 >>> print(world_model)
```

When using python2 you have to set PYTHONPATH to <path/to/>install/ad_physics/lib/python2 and <path/to/>install/ad_rss/lib/python2 instead.
For some simple examples, you might also want to spot into the ad_rss_python/tests folder.
