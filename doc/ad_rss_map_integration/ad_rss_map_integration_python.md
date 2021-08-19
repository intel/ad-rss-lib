# Usage of python binding for ad_rss_map_integration

Compilation of ad_rss_map_integration_python (build option *-DBUILD_PYTHON_BINDING=ON*)
will create an *ad_rss_map_integration* python package
inside the install/ad_rss_map_integration/lib/pythonMaj.Min/site-packages folder.
The packages can be used inside any python code to use
datatypes or call methods defined in ad_rss_map_integration and its dependencies ad_physics, ad_map_access and ad_rss.

## Usage of python binding
To use the compiled python binding, one has to extend the current environment
to be able to use the newly created library. Afterwards, one can import the
python package and use it as any other python module.
```bash
 ad-rss-lib$> echo "Setting PYTHONPATH and LD_LIBRARY_PATH:"
 ad-rss-lib$> source install/setup.bash
 ad-rss-lib$> python3.8
 >>> import ad_rss_map_integration as ad
 >>> scene_creation = ad.rss.map.RssSceneCreation(1, ad.rss.world.RssDynamics())
 >>> world_model = scene_creation.getWorldModel()
 >>> print(world_model)
```
Also the interface of the dependencies can be accessed directly, since ad_rss_map_integration is relying on those
(e.g. the type of the above returned world_model is actually ad.rss.world.WorldModel() provided by ad_rss):
```bash
 >>> ad.map.access.init("ad_rss_map_integration/python/tests/resources/Town01.txt")
 >>> lanes = ad.map.lane.getLanes()
 >>> print(len(lanes))
 >>> distance = ad.physics.Distance(2.0)
 >>> print(distance)
```

For some simple examples, you might also want to spot into the ad_rss_map_integration/python/tests folder.
