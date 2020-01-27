# Usage of Python binding for ad_rss_map_integration

Compilation of ad_rss_map_integration_python will create a libad_rss_map_integration_python.so shared library inside
the install/ad_rss_map_integration/lib folder.
The shared library can now be used inside any Python code to use
datatypes or call methods defined in ad_rss.

## Usage of Python binding
To use the compiled Python binding, one has to extend the current environment
to be able to use the newly created library. Afterwards, one can import the
Python library as module and use it as any other Python module.
```bash
 ad_rss_map_integration_python$>  export PYTHONPATH=$PYTHONPATH:<path/to/>install/ad_rss_map_integration/lib:<path/to/>install/ad_rss/lib:<path/to/>install/ad_map_access/lib:<path/to/>install/ad_physics/lib
 ad_rss_map_integration_python$>  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<path/to/>install/ad_rss_map_integration/lib:<path/to/>install/ad_rss/lib:<path/to/>install/ad_map_access/lib:<path/to/>install/ad_map_opendrive_reader/lib:<path/to/>install/ad_physics/lib
 ad_rss_map_integration_python$>  python
 >>> import libad_physics_python as physics
 >>> import libad_map_access_python as admap
 >>> import libad_rss_python as rss
 >>> import libad_rss_map_integration_python as rssmap
 >>> admap.init("tests/resources/Town01.txt")
 >>> lanes = admap.getLanes()
 >>> print(len(lanes))
 >>> world_model = rssmap.initializeWorldModel(1, rss.RssDynamics())
 >>> rssmap.finalizeWorldModel(rss.RssDynamics(), world_model)
 >>> print(world_model)
```

For some simple examples, you might also want to spot into the ad_rss_map_integration_python/tests folder.
