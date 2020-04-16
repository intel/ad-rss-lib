
## Release 3.x

The release versions 3.x do not extend the core features. Only some interface changes were applied to support the integration with [CARLA Driving Simulator](https://github.com/carla-simulator/carla/blob/master/Docs/adv_rss.md).

## Release 2.x

The release versions 2.x extend the core features only to support [speed limits](https://intel.github.io/ad-rss-lib/ad_rss_map_integration/ConstructRSSScenes/index.html#considerspeedlimits).
Furthermore some interface changes were applied to support the integration with [AD map data](ad_rss_map_integration/Main.md).

## Release 1.x

The release versions 1.x cover the complete feature set of RSS as described [here](https://arxiv.org/abs/1708.06374),
except:

* Compensating for improper behavior of others
* Lateral conflicts in case of intersections
* Respecting occlusions
* Checks with Vulnerable Road Users
* Checks for unstructured roads, e.g. parking spaces