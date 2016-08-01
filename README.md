sonic-sdi-framework
-------------------
This repo contains utility API's for the SONiC Dell SDI implementation. 

As you likely know the sonic-sdi-api is used as an interface to the hardware by the PAS component.

Description
-----------
The framework provides mechanism using which drivers can register themselves and their resources, buses and other facitlities that can be used either by other drivers or by sdi-sys. 

There are also a number of hardware BUS utility functions used by the sonic-sdi-device-drivers.

Building
--------
Please see the instructions in the sonic-nas-manifest repo for more details on the common build tools.  [Sonic-nas-manifest](https://github.com/Azure/sonic-nas-manifest)

Development Dependencies:
 - sonic-logging 
 - sonic-common-utils
 - sonic-sdi-api

Dependent Packages:

 - libsonic-logging1 libsonic-logging-dev libsonic-common1 libsonic-common-dev  sonic-sdi-api-dev

BUILD CMD: sonic_build --dpkg libsonic-logging1 libsonic-logging-dev libsonic-common1 libsonic-common-dev  sonic-sdi-api-dev -- clean binary

(c) Dell 2016
