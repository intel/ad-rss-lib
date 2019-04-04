## FAQ

### Integrating ad-rss-lib into a system
This section tries to give answers to the questions that came up while people were integrating *ad-rss-lib* into their systems.

#### Integration examples
The *ad-rss-lib* is already integrated in other open source projects:
- [Apollo Open Platform](https://github.com/ApolloAuto/apollo/blob/master/modules/planning/tasks/rss/decider_rss.cc): In *Apollo* Open Automated Driving stack *RSS* is integrated directly into the planning module to provide additional information to be deployed while planning.
- [CARLA Simulator](http://carla.org/): Soon, a basic *RSS Sensor* for simulated vehicles will be available within the simulation covering non-intersection scenarios for situations with other vehicles on the same road. Followed by a *RSS Vehicle Restrictor* to enforce the resulting acceleration restrictions to a simulated vehicle, if activated. Stay tuned...

#### Classes: RssCheck, RssSituationChecking and RssResponseResolving

###### What do I need to perform the checks?
The *ad-rss-lib* provides more or less two ways of integration of the functionality into a system.
1. The *RssCheck* class performs all required steps one after another. Create a permanent object instance of this class and call *calculateAccelerationRestriction* for every step in time continuously. You have to provide the world model data as input and get the acceleration restrictions to be applied as output.
2. If you are interested in the intermediate results you can to call the processing chain step by step. For this, you have to create a permanent object instance of RssSituationChecking and RssResponseResolving classes and call the following processing chain for every step in time continuously:
  - RssSituationExtraction::extractSituations(worldModel, situationVector)
  - mSituationChecking->checkSituations(situationVector, responseStateVector)
  - mResponseResolving->provideProperResponse(responseStateVector, properResponse)
  - RssResponseTransformation::transformProperResponse(worldModel, properResponse, accelerationRestriction)

You can directly take  [RssCheck::calculateAccelerationRestriction()](https://github.com/intel/ad-rss-lib/blob/master/src/core/RssCheck.cpp) as an example on how to call the individual steps. Applying the step-by-step calls especially provides the
response state on individual object basis of the scene.

Regardless which solution you prefer, you always have to respect the return value of the functions, before you further make use of the information!

###### Why are some functions realized in a namespace where others required a class?
*RSS* analyses the observed situations over time. Therefore, some of the processing steps have to store the state of previous time steps. As a consequence, the object instances of the classes have to exist over time and must not be deleted!

#### Input: world model data

The *worldModel* is the input to the *RSS* calculations.
It is derived from the *Sense* part.

###### How do I get to the information required for the input *worldModel*?
The world model data heavily depends on the system the *ad-rss-lib* is going to be integrated. Therefore, there is no single answer to this question. Simple scenarios can be derived using basic object data, integration of *RSS* to the full extend demand more sophisticated a-priori information, usually provided by means of an AD-Map. The [unit tests](https://github.com/intel/ad-rss-lib/blob/master/tests/core/RssCheckTestBaseT.hpp) provided with the *ad-rss-lib* build some basic *worldModel* structures that might be taken as a starting point. Better examples can be found in the section on [Integration examples](#integration-examples).

#### Output: rssAccelerationRestrictions

The *rssAccelerationRestrictions* is the output of the *RSS* calculations.
It is given as input of the *Act* part.

###### If a RSS restricted acceleration is applied on the actuators, does it mean that RSS is not only a checker?
Yes, indeed. At one hand side RSS performs an analysis of the situation over time which detects if a situation is becoming dangerous. In addition, RSS derives also a proper response for the ego-vehicle on how to get out of such. If finally the resulting acceleration restrictions in longitudinal, lateral left and right directions are considered by the actuation system, the situation will become safe again.

###### Is there any impact on the "Plan" part? Should it be adapted since it undergoes RSS acceleration restrictions?
There are many possibilities on how the information on the *RSS* situation analysis can be deployed within a system. It can be used as a plain safety checking and enforcing entity being totally independent from the *Plan* part. Then, the *Plan* will only indirectly be influenced in a way, that the vehicle is not following the planing output. But for sure the Planning algorithms might directly benefit when feeding back the information from *RSS*.
Even beyond, if the planning algorithms evaluate different driving strategies, *RSS* can be applied directly within the planning algorithm to influence the rating. This includes also learning algorithms of AI-based planning approaches.
