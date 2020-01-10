# RSS System Architecture Overview

This section sketches the integration of RSS into a exisiting system architecture.

### Overview: Sense, Plan, Act, RSS

| ![](../images/img/d704ce30-6e93-4180-aaf8-fce2a4896ffa_url_f36d61c4-efc7-4689-9709-83836e6b3bf7.tmp) | 
|:--:| 
| *A generic system architecture for an Automated Driving System* |

From high level view the architecture of an Automated Driving System (ADS) consists of three main parts: Sense, Plan, Act. The world model data
provided by the Sense part is used by the Plan part to create the near term actuator control commands executed by the
Act part.

| ![](../images/img/d377baa5-5706-4fff-b333-30b97928603c_url_a9dc98d2-f3ea-4090-80e8-78c967b325dd.tmp) | 
|:--:| 
| *Integration of RSS into a system architecture* |

RSS is integrated into such an ADS architecture by placing it in parallel to the Plan. To provide a safety envelope
around the planning output the integration of RSS into a ADS architecture spans into the Sense part to provide the
required RSS world model data as well as into the Act part to limit the actuator control commands to the RSS
restrictions.

### Sense Component

The Sense part gathers information on the environment required to fulfill the ADS task. In general there exist several
level of perception and fusion which enrich the world model to the extend required for the planning algorithms. In this
high-level architecture overview the Sense part takes over this task.

#### SensorSubsystem

The SensorSubsystem realizes the Sense part functionality. It is responsible for the perception of the environment. It
interfaces to the real world by receiving, processing and fusing sensor information. It provides all information in form
of the world model to the other ADS subsystems. The exact content of the world model data is highly dependent on the
concrete realization of the receiving subsystems, especially the degree of perception and fusion applied will differ.
The provided world model data might include raw sensor data, high level object data, but also a-priori knowledge such as
AD map data. To account for this the SensorSubsystem provides separate output ports for every connected subsystem.

| Port  | Name | Explanation |
|--------|------|------|
| Input  | None | None |
| Output | planWorldModelData | The world model data required by the PlanningSubsystem |
|        | rssWorldModelData  | The world model data required by the RssSubsystem.     |


| ![](../images/img/a249fd7e-230d-4389-9f64-bb617cc2bc6d_url_4b12944b-4771-4523-947b-b5ef8221dfe2.tmp) | 
|:--:| 
| *Extending the Sense part with world model data required by RSS* |

##### Sense

The Sense entity is responsible to create the world model data required by the PlanningSubsystem. This contains the ADS
Planning specific implementation of the Sense part which already exists.

##### RssWorldModeling

The RssWorldModeling entity is responsible to create the world model data required by the RssSubsystem. The user has to
implement this functionality as part of the RSS integration efforts into the ADS system. The RssWorldModelData has to be
<!-- filled with meaningful and reliable data. -->

### Plan Component

The Plan part processes the information on the environment to create the internal world model required to plan the next
moves of the ADS.

#### PlanningSubsystem

The PlanningSubsystem realizes the Plan part functionality. It performs the decision-making of the ADS. It analyses the
provided PlanWorldModelData and decides what action to take. Finally, this leads to concrete control commands for the
ADS ActuatorSubsystem defining the next move of the ADS.

| Port  | Name | Explanation |
|--------|------|------|
| Input  | planWorldModelData | The world model data required by the PlanningSubsystem |
| Output | actuatorControlCommand  | The control commands to realize the next moves within the current plan     |

### Act Component

The Act part executes the moves which the Plan part has calculated.

#### ActuatorSubsystem

The ActuatorSubsystem realizes the Act part functionality. It receives the ActuatorControlCommands controlling i.e.
acceleration, braking and steering to execute the plan.

| Port  | Name | Explanation |
|-------|------|------|
| Input | rssAccelerationRestrictions | The restrictions on the acceleration for the vehicle calculated by RSS |
|       | actuatorControlCommand  | The control commands to realize the next moves within the current plan     |
| Output| None | None |


| ![](../images/img/5c730771-64c0-4a89-bfe5-e478a33333aa_url_1ebb18d9-24d8-4a60-9320-d716f465eee2.tmp) | 
|:--:| 
| *Extending the Act part by RSS command limitation* |

##### RssActuatorCommandLimitation

The RssActuatorCommandLimitation entity receives the actuator control commands from the PlanningSubsystem and restricts
the control values according to the restrictions calculated by RSS. The resulting actuator control commands are safe in
respect to RSS rules. This calculation heavily depends on the actual representation of the ActuatorControlCommands data.
Therefore, a generic implementation is not possible. Therefore, the user has to implement this functionality as part of
the RSS integration efforts into the ADS system.

| Port  | Name | Explanation |
|-------|------|------|
| Input | rssAccelerationRestrictions | The restrictions on the acceleration for the vehicle calculated by RSS |
|       | actuatorControlCommandIn  | The control commands from the PlanningSubsystem to control the vehicle actuator system |
| Output| actuatorControlCommandOut | The adapted control commands from the PlanningSubsystem to control the vehicle actuator system in a RSS safe manner |

##### Act

The Act entity is responsible to execute the moves which the PlanningSubsytem has calculated. This contains the ADS
actuator specific implementation of the Act part which already exists.

| Port  | Name | Explanation |
|-------|------|------|
| Input | actuatorControlCommand | The control commands to control the vehicle actuator system |
| Output| None | None |

### RSS Component

The RSS part restricts the moves the Plan part has calculated according to the RSS proper response

#### RssSubsystem

The RssSubsystem realizes the RSS part functionality. It implements the RSS checks based on the RssWorldModelData
received from the SensorSubsystem:

1. Keep a safe distance from the car in front
2. Leave time and space for others in lateral maneuvers
3. Exhibit caution in occluded areas [not implemented yet]
4. Right-of-Way is given, not taken

In case a dangerous situation is detected a respective proper response is calculated and the actuator control commands
received 
from the PlanningSubsystem are restricted accordingly to realize planning safety.

| Port  | Name | Explanation |
|-------|------|------|
| Input | rssWorldModelData | The world model data required to calculate the RSS checks |
| Output| rssAccelerationRestrictions | The restrictions on the acceleration for the vehicle calculated by RSS |


| ![](../images/img/e4287b00-c27b-4901-8571-3a17b745ee44_url_d03f53e8-c082-4654-8d3b-b385c433028a.tmp) | 
|:--:| 
| *RSS internal processing steps to perform RSS checks and execute the RSS proper response* |


##### RssSituationExtraction

The RssSituationExtraction entity transforms the global Cartesian world model data into individual RssSituations between
the ego vehicle and each of the objects. For every pair <ego-vehicle, object> in the world model data the individual
situation coordinate system transformation is performed.

| Port  | Name | Explanation |
|-------|------|------|
| Input | rssWorldModelData | Global Cartesian world model data providing information on the local surrounding environment required to create the situation coordinate system pairs <ego-vehicle, object>. Requires local map data (i.e. lane segments and semantics on intersections and priority rules), ego vehicle and object (i.e. position, velocity and RSS dynamics) information. |
| Output| rssSituations | A list of individual RSS Situations between the ego vehicle and each of the objects. Each situation is formulated within its own lane-based coordinate system. EgoVehicle and Objects: i.e. (relative) position, velocity, priority flag, situation specific RSS acceleration values. |


##### RssSituationChecking

The RssSituationChecking entity performs the RSS check on all incoming individual RssSituations and creates the required
RssResponseStates if dangerous situations are detected.

| Port  | Name | Explanation |
|-------|------|------|
| Input| rssSituations | A list of individual RSS Situations between the ego vehicle and each of the objects. Each situation is formulated within its own lane-based coordinate system. EgoVehicle and Objects: i.e. (relative) position, velocity, priority flag, situation specific RSS acceleration values. |
| Output | rssResponseStates | A list of RSS response states in respect to the individual RSS Situations |

##### RssResponseResolving

The RssResponseResolving entity handles conflicts of the incoming RssResponseStates. It combines the individual
<ego-vehicle, object> situation specific response states into one single overall RssResponseState.

| Port  | Name | Explanation |
|-------|------|------|
| Input | rssResponseStates | A list of RSS response states in respect to the individual RSS Situations |
| Output | rssResponseState | Resulting combined overall RssResponseState |

##### RssResponseTransformation

The RssResponseTransformation entity transforms the overall RssResponseState back into the global Cartesian world. This
results in RSS restrictions for the actuator commands.

| Port  | Name | Explanation |
|-------|------|------|
| Input | rssResponseState | Resulting combined overall RssResponseState provided by the RssResponseResolving |
| Input | rssWorldModelData | Global Cartesian world model data providing information on the local surrounding environment required to transform the RSS response state back into acceleration restrictions in the Catesian space. Requires local map data (i.e. lane segments of the ego vehicle) and ego vehicle (position, velocity and RSS dynamics) information. |
| Output | rssAccelerationRestrictions | The resulting restrictions of the actuator control command |
