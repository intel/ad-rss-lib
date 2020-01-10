## Design for Security

This chapter discusses security aspects.

### Architecture and dataflow

As a reminder of the high-level architecture, we refer to two figures from the [integration chapter](HLD-ArchitectureOverview.md).

* The first figure, shows the RSS function within the autonomous driving
(AD) system. The RSS function has a single input called
`rssWorldModelData`, and a single output called `rssAccelerationRestrictions`.
* The second figure, shows further detail of the RSS function, with the same external inputs and outputs
(`rssWorldModelData` and `rssAccelerationRestrictions`), as well
as the internal calculation steps and internal dataflow.

In addition, from the chapter <<Section::HLD::SoftwareArchitecture>>,
we refer to the figure describing the [RSS Component](HLD-ArchitectureOverview.md#rss-component)
This figure shows the C++ software class that implements the external
RSS interface, called `RssCheck`.
The top-level external interface is implemented using a single routine,
called `calculateAccelerationRestriction()`, which is a member function of
the `RssCheck` class. This routine has a single input, called `worldModel` (of
type `WorldModel`), and a single output,
called `accelerationRestriction` (of type `AccelerationRestriction`).
This figure also shows the subroutines called from `RssCheck::calculateAccelerationRestriction()`, which are part of the core interface of the library.

The library is single-thread, does not make network connections, and does not make connections with other processes remote or local.

The library does not make use of any 3rd party components, and as such does not have security dependencies.

The primary adversary model is one where invalid/incorrect input data could be provided to the library input interface by the system or from an upstream source.

In the following sections, we discuss security aspects related to:
input data (implemented by `WorldModel`), output data (implemented
by `AccelerationRestrictions`), and the RSS function itself (implemented
by `RssCheck` and supporting library classes).


### RSS input data (`WorldModel`)


#### Input data source

The input data is contained in `WorldModel`. This data includes distances to
other road agents (vehicles and other) and velocities of other road agents. This
data also includes description of the geometry of the road (and road lanes). All
data types are described in detail in the chapter
<<Section::HLD::SoftwareArchitecture>>.

The data contained in `WorldModel` is provided directly by a
calling routine external to the RSS library. Typically, this data will
ultimately originate from the vehicle sensing subsystem, but it is the
responsibility of the calling routine to receive, convert, and provide
this sensing-derived data to the RSS function in the correct format.
The calling routine must ensure the integrity of the input data
provided to the RSS library functions.

#### Validity of input data and error handling

The library attempts to ensure the validity of the input data, and handle cases of improper or invalid input data, in several ways.

Several explicit checks of the input data validity are performed, including the following.

* Check that the data structure describing the local road and lane geometries is
  internally consistent. The description of a local road follows basic constraints,
  and if the description is inconsistent with these constraints, the routine
  that analyzes the situation from the input data returns, with the success/fail
  flag set to 'fail'.
* Check that the data structures describing the ego-vehicle or other objects (other
  vehicles) are internally consistent. The routine that analyzes the situation checks
  against basic constraints. If the constraints are violated, the routine returns
  with the success/fail flag set to 'fail'. For this, the routines withinValidInputRange()
  are used. The respective Doxygen description of these contains the absolute values against
  which the inputs (like e.g. velocities, accelerations, etc.) are checked.

Error handling: Each routine in the library that invokes subroutines checks a success/fail flag returned by the subroutine. In addition, many routines perform custom checking of the internal logic against known constraints of RSS. A failure of a logic check or of a subroutine results in interruption of the routine and a fail flag being passed to the calling routine.

Exception handling: The code-blocks in high-level routines are enclosed inside C++ try-catch blocks. Any exception thrown at lower-level software routines results in a fail flag being returned to the caller of the publicly available high-level routines.

When any of the above errors occur, the top-level RSS routine,
`RssCheck::calculateAccelerationRestriction()`, will return with the success/fail
flag set to 'fail'.

Logging: The top-level routine in the library returns a success/fail flag that can
be recorded by logging functions that may be available in the overall AD system
(external to the library). Beyond this, the library does not perform error logging internally.


#### Non-functional requirements

The size of the input data (`WorldModel`) provided to `RssCheck` is determined by the number of other objects (other vehicles or road agents) that the ego-vehicle is interacting with, and the size of the description of each object and associated road areas.  Based on this, it is straightforward to bound the size of data that must be consumed by the `RssCheck` in a single call, based on the sizes of individual datatypes and by bounding the number of objects.

It is the responsibility of the system integrator to determine the number of objects the system can handle and to bound the size of the input data.

It is the responsibility of the system integrator to determine an appropriate rate or a maximum rate at which the top-level routine,
`RssCheck::calculateAccelerationRestriction(), should be invoked.

The latency resulting from the processing time of
`RssCheck::calculateAccelerationRestriction()` should be strictly limited, due
to the real-time nature of the AD system and closed-loop interaction with the
real world environment. This latency should be less than the time period
(1/rate) of the ActuatorSubSystem. It is the responsibility of the system
integrator to ensure that this is achieved, or to achieve a latency below an
upper bound that is tighter (lower) than the one mentioned here.


### RSS output data (`AccelerationRestriction`)

`RssCheck::calculateAccelerationRestriction()` outputs a structure of type
`AccelerationRestriction`. This is a very small structure that contains three
ranges of acceleration allowed by RSS:

* allowable range of longitudinal acceleration,
* allowable range of lateral acceleration to the left of the vehicle, and
* allowable range of lateral acceleration to the right of the vehicle.

Each acceleration range consists of two values: a lower bound and an upper
bound. The lower bound and upper bound simply specify an interval of allowable
acceleration. Note that a negative value of acceleration implies deceleration,
i.e. braking.


#### Output data destination

These three ranges (in `AccelerationRestriction`) are provided to the system
that calls the RSS top-level routine, and indicate the range of acceleration
that the AD system must ultimately achieve in order to comply to RSS. In other
words, if the AD system seeks to comply to the RSS model, it must achieve
an acceleration that is within these bounds provided by the RSS function.

Typically, the system would provide the RSS acceleration restriction data to the
actuation and control subsystem of the autonomous driving system. This
subsystem, external to the RSS library, should enforce the lower and upper
bounds of lateral and longitudinal acceleration provided by the RSS function. Implementation of this process is external to the RSS library, and the system
integrator must ensure that this is implemented properly and that RSS output
values are used correctly.


#### Bounds on the output data values

As discussed above, the output values of the RSS function are lower and upper
bounds on acceleration.  The lower and upper bounds determined by the RSS
function originate from the input provided to the RSS function. Namely,
acceleration values are provided as dynamics properties of each vehicle
acting as road agent/object in the situation. Hence, in the current
implementation, the set of possible output data values is a very small
set of values that are provided as input.

The output values can be further bounded within absolute lower and upper
limits by bounding the input values within those desired limits.
Also check the Doxygen documentation of the withinValidInputRange() functions of the
respective data types for the actual values defined.

It is the responsibility of the system external to the RSS library to ensure
that the acceleration and deceleration actually achieved by the vehicle always
remain within the limits calculated by the RSS function, and remain within other
limits unrelated to RSS (e.g. physical limits imposed by the vehicle
dynamics and the environment).


#### Bounds on the output data size

The output data of the RSS calculations consists of 6 floating point values
(3 ranges, each with a lower and upper limit). As such, the size of the output
data is strictly bounded already.

It is the responsibility of the system integrator to determine an appropriate
rate or maximum rate at which to invoke the RSS library function.


### RSS library code validation

#### Dependencies

The RSS library has no dependency on any external library (except for the
C++ Standard Library).


#### Coding standards

Code quality has been ensured through unit testing.

Unit testing achieved code coverage of: 100% functions, 100% lines, >80% branches.
Current coverage measures can be retrieved via github deployment:
https://intel.github.io/ad-rss-lib/coverage/index.html

#### Compiler and compiler security flags

The development platform is Ubuntu Linux 16.04 Xenial.

A standard cmake toolchain has been used to compile the library. The compiler is g++ 5.4.0; g++ 4.8.0 is also supported.

The following, strict, compilation flags are used: C++11, -Werror, -Wall, -Wextra, -pedantic, -Wconversion, -Wsign-conversion, -Wfloat-equal -Wshadow -Wswitch-default -Wenum-compare -Wformat -Wformat-security.

* -Werror turns all warnings into errors
* -Wall enables many warnings about code constructs that are questionable
* -Wextra enables additional warnings not enabled by -Wall
* -Wconversion warns for implicit conversions (e.g. between integer and real types)
* -Wsign-conversion warn for implicit conversions that may alter a value
* -pedantic issues all warnings demanded by strict ISO C and C++
* -Wfloat-equal warn if floating-point values are used in equality comparisons
* -Wshadow warn on shadowed variable declarations
* -Wswitch-default warn if the default case is missing in a switch
* -Wenum-compare warn about a comparison between values of different enumerated types
* -Wformat* warns about errors within format strings

In addition, there are compiler flags
* -fstack-protector-all -fasynchronous-unwind-tables -fno-omit-frame-pointer -fno-delete-null-pointer-checks -fno-strict-overflow -fwrapv -fPIE -fPIC -D_FORTIFY_SOURCE=2
and linker flags
* -Wl,-z,now -Wl,-z,relro -pie
defined to harden the resulting binaries. Hardening is disabled by default, as build hardening is usually injected by the surrounding build system.

Compilation with these flags completes without any error or warning.


#### Code analysis

The code analysis tool `cppcheck` was run on the library code, and no relevant issues found.


#### Critical assets

The library does not contain critical assets from a security perspective, other than the library code itself.
