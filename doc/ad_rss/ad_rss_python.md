# Usage of python binding for ad_rss

Compilation of ad_rss_python (build option *-DBUILD_PYTHON_BINDING=ON*)
will create an *ad_rss* python package
inside the install/ad_rss/lib/pythonMaj.Min/site-packages folder.
The packages can be used inside any python code to use
datatypes or call methods defined in ad_rss and its dependency ad_physics.

## Usage of python binding
To use the compiled python binding, one has to extend the current environment
to be able to use the newly created packages. Afterwards, one can import the
python package and use it as any other python module.
```bash
 ad-rss-lib$> echo "Setting PYTHONPATH and LD_LIBRARY_PATH:"
 ad-rss-lib$> source install/setup.bash
 ad-rss-lib$> python3.8
 >>> import ad_rss as ad
 >>> world_model = ad.rss.world.WorldModel()
 >>> print(world_model)
```
Also the interface of the dependency can be accessed directly, since ad_rss is relying on those:
```bash
 >>> distance = ad.physics.Distance(2.0)
 >>> print(distance)
```

For some simple examples, you might also want to spot into the ad_rss/python/tests folder.
