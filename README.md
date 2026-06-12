# CrashLink 

## Overview
CrashLink is a hybrid LTE + LoRa based emergency alert system.It enables accident alerts to be transmitted even from areas with no cellular network coverage.

## Problem
Many accidents happens in areas with low cellular connectivity which delays in the response time of emergency responders and fatality chances of victims incrreases significnatly.

## Solutions
CrashLink uses
-Vehicle nodes
-Relay nodes
-Gateway nodes

LTE is used when coverage exists. LoRa acts as a backup communication network when LTE is unavailable.

## Current Progress
- [x] System architecture designed
- [x] Vehicle Node schematic completed[Needs Revision]
- [x] Vehicle Node PCB designed[Needs Revision]
- [x] Vehicle Node gerbers generated[Needs Revision]
- [] Vehicle Node 3D Enclosure file generated
- [x] Relay Node schematics completed[Needs Revision]
- [x] Relay Node PCB designed[Needs Revision]
- [] Relay Node gerbers generated
- [] Relay Node 3D Enclosure file generated
- [] Gateway Node schematics completed
- [] Gateway Node PCB designed
- [] Gateway Node gerbers generated
- [] Gateway Node 3D Enclodure file generated
- [] Prototype assembly
- [] Firmware development

## Hardware

- ESP32
- SX1278 LoRa
- A7670 LTE
- NEO-6M GPS
- MPU6050

Detailed Bill of Materials : [bom.md](docs/bom.md)

## Images

## PCB Layout

![Vehicle Node](hardware/Vechile_Node/crashlink_vehicle_node_v1.0.png)


## 3D Render
![3D Render Vehicle Node](hardware/Vechile_Node/crashlink_vehicle_node_v1_3d.png)

## System Architecture

![Architecture](images/architecture/architecture_v1.png)

