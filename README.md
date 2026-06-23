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

## System Architecture

![Architecture](images/architecture/architecture_v1.png)

## Vehicle Node

### PCB View

![Vehicle Node](hardware/pcb/vechile_node/PCB_vn_v1.png)
![2D Top](hardware/pcb/vechile_node/2D_vn_top_v1.png)
![2D Bottom](hardware/pcb/vechile_node/2D_vn_bottom_v1.png)
![3D Render Vehicle Node](hardware/pcb/vechile_node/3D_vn_v1.png)
![Enclosure](assets/images/Journal/June20.0.png)

## Relay Node

### PCB View

![Relay Node](hardware/pcb/relay_node/PCB_rn_v1.png)
![2D Top](hardware/pcb/relay_node/2D_rn_top_v1.png)
![2D Bottom](hardware/pcb/relay_node/2D_rn_bottom_v1.png)
![3D Render Relay Node](hardware/pcb/relay_node/3D_rn_v1.png)
![Enclosure](assets/images/Journal/June20.2.png)

## Gateway Node

### PCB View

![Gateway Node](hardware/pcb/gateway_node/PCB_gn_v1.png)
![2D Top](hardware/pcb/gateway_node/2D_gn_top_v1.png)
![2D Bottom](hardware/pcb/gateway_node/2D_gn_bottom_v1.png)
![3D Render Gateway Node](hardware/pcb/gateway_node/3D_gn_v1.png)
![Enclosure](assets/images/Journal/June20.1.png)


## Current Progress
- [x] System architecture designed
- [x] Vehicle Node schematic completed
- [x] Vehicle Node PCB designed
- [x] Vehicle Node gerbers generated
- [x] Vehicle Node 3D Enclosure file generated
- [x] Relay Node schematics completed
- [x] Relay Node PCB designed
- [x] Relay Node gerbers generated
- [x] Relay Node 3D Enclosure file generated
- [x] Gateway Node schematics completed
- [x] Gateway Node PCB designed
- [x] Gateway Node gerbers generated
- [x] Gateway Node 3D Enclodure file generated
- [] Prototype assembly
- [] Firmware development

## Hardware

- ESP32
- SX1278 LoRa
- A7670C-LANS LTE
- NEO-6M GPS
- MPU6050

Detailed Bill of Materials : [bom.md](docs/bom.md)


