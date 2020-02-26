
## Parameter Discussion
The RSS papers uses a few constants required for the safety calculations. The
values for these constants are not yet defined and open for
discussion/regulation. Nevertheless, the implementation of the ad-rss-lib needs
to define initial values for these functions.

!!! NOTE
    To be as flexible as possible, the parameters are implemented as configuration
    values so these can be easily adjusted during evaluation or after the release.
    In other words, the values are not hard coded in the library, but can be
    changed via the provided inputs.


In the following, the key parameters and the decision for possible initial
values are discussed. The used parameters based on [the RSS paper](https://arxiv.org/abs/1708.06374)
are:

* Response time $\rho$

  It is assumed that an AV vehicle has a shorter response time than a human
  driver. Therefore, there is a need to have two different parameters. As it
  might not be possible to determine whether another object is an AV vehicle or
  has a human driver, the ad-rss-lib will safely assume that all other objects
  are driven by humans. Hence, two parameters for the response time are used:

  * $\rho_{ego}$: for the ego vehicle
  * $\rho_{other}$: for all other objects

* Acceleration $\alpha$

  RSS proposes several different acceleration/deceleration values. One could
  argue that acceleration/deceleration differs with the type of vehicle. Also
  at least the acceleration is dependent on the current vehicle speed. As it
  cannot be assured that the individual acceleration of each and every car can
  be known and the specific car can be reliably detected, the ad-rss-lib will
  assume fixed constants for those values. These could be either the maximum
  physically possible values or restrictions that are imposed by regulation.
  Also there will not be different values for the ego vehicle and the other
  vehicles. It could be argued that for the ego vehicle e.g. desired
  acceleration might be known. Therefore, a shorter safety distance would be
  sufficient. But as all other vehicles do not know about the intention of the
  ego vehicle this would lead to a violation of their safe space. So the ad-rss-lib
  will need to calculate its checks with the globally defined
  accelerations values even if the vehicle does not intend to utilize them to
  its limits.
  The parameters used for acceleration are:

  * $\alpha_{accel,max}$ maximum possible acceleration
  * $\alpha_{brake,min}$ minimum allowed braking deceleration in longitudinal
    direction for most scenarios
  * $\alpha_{brake,max}$ maximum allowed deceleration in longitudinal direction
  * $\alpha_{brake,min,correct}$ minimum allowed deceleration in longitudinal
   direction for a car on its lane with another car approaching on the same
   lane in wrong driving direction
  * $\alpha^{lat}_{brake,min}$ minimum allowed braking deceleration in lateral
   direction
  * $\alpha^{lat}_{accel,max}$ maximum allowed acceleration in lateral direction
  * $\delta^{lat}_{min}$ fluctuation margin for that needs to be respected when
   calculating lateral safe distance

### Decision on Selected Parameter Values

!!! NOTE
    The following parameter values are only suggestions and open for discussion.
    These can be changed at anytime, if it is required.

#### Response time
For the response times a common sense value for human drivers is about 2
seconds. For an AV vehicle the response time could be way lower. In order to be
not too restrictive the initial value for the ego vehicle response time will be
assumed as 1 second. Hence, $\rho_{other} = 2s$ and $\rho_{ego} = 1s$. If we
assume a case of AD vehicles only, the response time may be reduced.

#### Longitudinal Acceleration
Finding meaningful acceleration values is more complicated. At the one hand the
values should be as close as possible or even exceed the maximum physically
possible values. The minimum deceleration values must also not exceed normal
human driving behavior. So assuming a too high deceleration for other cars may
lead to a false interpretation of the situation.

On the other hand a too big difference between the minimum and maximum
acceleration values will lead to a very defensive driving style. As a result,
participating in dense traffic, will not be possible (see figure below).
A rule of thumb for deceleration in German
driving schools is: $\alpha_{brake,min} = 4m/s^2$ and $\alpha_{brake,max} = 8m/s^2$.

But on the other hand, modern cars are able to decelerate with up to $12m/s^2$.
Especially for deceleration, it is questionable whether it is possible and
tolerable to restrict maximum braking below physically possible braking force.

For the maximum acceleration at low speeds a standard car will be in the range
of $3.4m/s^2$ to $7m/s^2$. But there are also sport cars that can go faster
than that. But for acceleration a regulation to a maximum value seems to be
more likely than for deceleration.

##### Restricting velocity to the current speed limit

| ![](../images/accelSafety.svg) | 
|:--:| 
| *Required safety distance for cars driving at 50 km/h (city speed) in same direction with $\alpha_{brake,min} = 4m/s^2$ and $\alpha_{brake,max} = 8m/s^2$ and $\rho_{ego} = \rho_{other} = 2s$* |

The assumption that a car can always accelerate at $\alpha_{accel,max}$
during the reponse time, leads to a significant increase of the required safety
distance. The figure above shows the required safety distance for
different acceleration values. So acceleration about $4m/s^2$ doubles the
required safety distance from $40m$ to about $80m$ at city speeds.

Therefore, it might be advisable to add a restriction that a car is only
allowed to accelerate up to the allowed speed limit. In addition, the common
behavior (in Germany) is to respect a safety distance of speed/2, e.g. in a
city with a speed limit of $50km/h$ the safety distance shall be $25m$.
Hence, it is obvious that the parameters may require some adjustments to allow
reasonable driving.

##### Further possible restrictions
Another possibility to decrease the required safety distance to the leading
vehicle would be to take the intention of the ego vehicle into account. E.g. if
the ego vehicle is following another vehicle and is not intending to
accelerate, then there is no need to assume that the ego vehicle is
accelerating during its response time. Nevertheless, there are several issues
with that approach:

1. It needs to be assured that all intended and unintended accelerations
   (e.g. driving down a slope) are known to RSS.
2. If RSS formulas are regarded as regulations, the safety distance must be kept
   regardless to the intent of the vehicle.

Therefore, in the current implementation this approach will not be applied.


#### Lateral Acceleration
When defining the parameters for lateral acceleration and deceleration, it is
import to keep in mind that the definition must allow bypassing of vehicles.
Physically high lateral accelerations are possible.
In order to be able to bypass a vehicle that is driving on a parallel lane,
the safe lateral distance needs to be safe during the complete response time of
the other vehicle.

Let us consider two identical vehicles driving on the centerline of two adjacent
lanes with zero lateral velocity. There is no lateral conflict, if the distance
between the border of the car and the adjacent lane is bigger than the distance
that the vehicle will cover when accelerating laterally at maximum during its
response time and then decelerating to zero lateral velocity.

| ![](../images/accelLat.svg) | 
|:--:| 
| *Distance a vehicle will cover when applying the "Stated Braking Pattern" with $\rho_{vehicle} = 2s$* |

The figure above shows the required safety distance, without
considering the fluctuation margin, each car needs to keep to the lane border
so the vehicles can pass without lateral conflict. With an assumed minimal lane
width of 3 meters and an assumed vehicle width of 2 meters, the distance from
vehicle edge to lane border is 0.5 meter, if the car is driving exactly in the
middle of the lane.

Hence, the required safety distance must be at most 0.5 meter. When using the
same values for acceleration and deceleration this will lead to
$\alpha^{lat}_{accel,max} < 0.1m/s^2$. But when restricting the acceleration
to that value a lane change will take almost 8 seconds.

As a result it is advisable, to use a higher deceleration than acceleration to
keep the required safety margin and allow for faster lane changes. E.g.
$\alpha^{lat}_{brake,min} = 0.8m/s^2$ and $\alpha^{lat}_{accel,max} = 0.2m/s^2$
will fulfill the given safety distance requirement. An increase to higher
acceleration values is for the given constraints not possible, as the  distance
covered during response time is already 0.4 meters.

It is obvious that given the lateral safety definition a lane change will at
least have a duration of two times the response time.

The lateral distance requirement is very strict, therefore it is required to
also come up with a desirably small value for the required lateral safety
margin $\delta^{lat}_{min}$. As this should only cover for fluctuations, there
is also no need for a huge margin. Thus initially this value will be set to
$\delta^{lat}_{min} = 10 cm$. This value should be able to cover small
fluctuations, but will not have a big impact on the safety distance.


!!! note
    As a starting point the values are set to:

    | Parameter                       | Value         |
    |:-------------------------------:|:-------------:|
    | $\rho_{ego}$                    | $1s$          |
    | $\rho_{other}$                  | $2s$          |
    | $\alpha_{accel,max}$            | $3.5m/s^2$    |
    | $\alpha_{brake,min}$            | $4m/s^2$      |
    | $\alpha_{brake,max}$            | $8m/s^2$      |
    | $\alpha_{brake,min,correct}$    | $3m/s^2$      |
    | $\alpha^{lat}_{brake,min}$      | $0.8m/s^2$    |
    | $\alpha^{lat}_{accel,max}$      | $0.2m/s^2$    |
    | $\delta^{lat}_{min}$            | $10cm$        |
