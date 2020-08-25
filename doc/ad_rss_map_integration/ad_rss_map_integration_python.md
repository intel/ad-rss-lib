# Usage of Python binding for ad_rss_map_integration

Compilation of ad_rss_map_integration_python (build option *BUILD_PYTHON_BINDING*)
will create ad/rss/map python package inside the install/ad_rss_map_integration/lib/pythonMaj.Min folder.
The packages can be used inside any Python code to use
datatypes or call methods defined in ad_rss_map_integration.

## Usage of Python binding
To use the compiled Python binding, one has to extend the current environment
to be able to use the newly created library. Afterwards, one can import the
Python package and use it as any other Python module.
```bash
 ad_rss_map_integration_python$>  export PYTHONPATH=$PYTHONPATH:<path/to/>install/ad_physics/lib/python3.6:<path/to/>install/ad_rss/lib/python3.6:<path/to/>install/ad_map_access/lib/python3.6:<path/to/>install/ad_rss_map_integration/lib/python3.6
 ad_rss_map_integration_python$>  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<path/to/>install/ad_rss_map_integration/lib:<path/to/>install/ad_rss/lib:<path/to/>install/ad_map_access/lib:<path/to/>install/ad_map_opendrive_reader/lib:<path/to/>install/ad_physics/lib
 ad_rss_map_integration_python$>  python3.6
 >>> import ad.rss.map
 >>> ad.map.access.init("tests/resources/Town01.txt")
 >>> lanes = ad.map.lane.getLanes()
 >>> print(len(lanes))
 >>> scene_creation = ad.rss.map.RssSceneCreation(1, ad.rss.world.RssDynamics())
 >>> world_model = scene_creation.getWorldModel()
 >>> print(world_model)
```

When using other python versions you have to set PYTHONPATH accordingly.
For some simple examples, you might also want to spot into the ad_rss_map_integration_python/tests folder.
