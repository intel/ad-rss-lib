## Overview

Unstructured scenes implement unstructured roads (described in chapter 3.7.2 of the [RSS paper](https://arxiv.org/abs/1708.06374), definitions 19-22) and pedestrians (described in chapter 3.8).
In contrast to the structured scenes, two dimensional trajectories with lateral and longitudinal components are calculated.


### World Modeling

TODO: you can select which situation should be calculated as unstructured.

### Behavior model/Trajectory Calculation

There are two different behavior models, for vehicles and pedestrians. They define the possible movement over time.
Limits are defined to be able to calculate all possible trajectories.

#### Vehicle

* The change of the yaw rate $h'(t)$ is limited: The maximum change of the yaw rate until response time can be specified by `UnstructuredSettings::vehicleYawRateChangePerSecond`.
* The radius of the circle, the vehicle is driving on is $r(t) = v(t)/h'(t)$
* At emergency, after the response time, the vehicle continues driving on a circle (i.e. no further yaw rate change)
* The minimum radius `UnstructuredSettings::vehicleMinRadius` defines the minimal radius a vehicle is able to drive on

The current implementation calculates the location and heading based on time increments (specified by `UnstructuredSettings::vehicleTrajectoryCalculationStep`). This might lead to an increasing error the farer the point is.

TODO: Add image showing possible trajectories

#### Pedestrian

* The change of heading $|h'(t)| is limited. That means, the maximum trajectory is defined by a circle until response time. The radius of this circle can be specified by `UnstructuredSettings::pedestrianTurningRadius`.
* At emergency, after the response time, the pedestrian will continue at a straight line
* If the pedestrian is standing, we assign it to all possible lines originating from his current position.

TODO: Add image showing possible trajectories

### Trajectory Set Calculation

To calculate a trajectory set, the maximum/minimum values for both, longitudinal and lateral component are applied.

The longitudinal boundaries of a trajectory set are defined by the minimum/maximum accelerations, the lateral by the maximum heading change to the left and right.

| Side | Longitudinal | Lateral |
|------|--------------|---------|
|Front | max acceleration | max left .. max right |  
|Back  | max braking | max left .. max right |  
|Left  | max braking .. max acceleration | max left |
|Right | max braking .. max acceleration | max right |

Each combination is used to calculate a final trajectory point (i.e. a position and a heading). Ranges are sampled.

Afterwards the vehicle dimensions are applied and a border polygon is calculated which defines the trajectory set.

!!! IMPORTANT
    The initial implementation uses simplifications that might not calculate valid trajectory sets for certain parameters.

There are two relevant trajectory sets: for braking $T(C_{b})$ and continue-forward $T(C_{f})$. The difference is the longitudinal acceleration after response time:

|   | $\alpha_{\rho,min}$ | $\alpha_{\rho,max}$ |
|------|--------------|---------|
| $T(C_{b})$     | $\alpha_{brake,max}$ | $\alpha_{brake,min}$ |
| $T(C_{f})$     | $\alpha_{brake,max}$ | $\alpha_{accel,max}$ |

This is similar for all traffic participants and uses the same rss formulas as in the structured case.

The lateral change is depending on the type of traffic participant, as described above.

### Decision making

The [RSS paper](https://arxiv.org/abs/1708.06374) definition 22 states conditions, that are relevant to calculate if a situation is dangerous and how to behave then.

Depending on their values, three decisions are possible:

* _brake_: Longitudinal braking
* _continue forward_: Continue driving without limitations
* _drive away_: Drive away within a certain heading range

The conditions are based on the brake and continue-forward trajectory sets for the ego vehicle and another traffic participant.

Condition 22.1

a.) $T_{ego, brake} \cap T_{other, forward} = 0$ and $T_{other, brake} \cap T_{ego, forward} \ne 0$

b.) $T_{other, brake} \cap T_{ego, forward} = 0$ and $T_{ego, brake} \cap T_{other, forward} \ne 0$

Condition 22.2

$T_{ego, brake} \cap T_{other, brake} = 0$

The following diagram describes the decision making.

| ![](../images/unstructured_decision.png) |
|:--:|
| *Decision making* |

The condition 22.1.b at the last safe point in time might lead to the behavior "Continue Forward" although the situation is dangerous. The reason is, that the conditions 22.1 define, which traffic participant has to brake and which one can continue.

### Driving away

In certain situations the ego vehicle might be allowed to drive away from a dangerous situation using a given heading range.

The heading range is calculated using the position vectors of the traffic participants and the velocity vector of the ego.

The angle between $\tau_{ego}(t) − \tau_{other}(t)$  and $\tau'_{ego}(t)$ needs to be $\le \theta$

$\theta$ can be specified by `UnstructuredSettings::driveAwayMaxAngle`

TODO: example image showing the drive away angle

