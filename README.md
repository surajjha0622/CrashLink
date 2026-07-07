# CrashLink

Hybrid **LTE + LoRa** Emergency Alert System for Reliable Accident Reporting

---

## Overview

CrashLink is a hybrid LTE + LoRa emergency alert system designed to transmit accident alerts even in areas with poor or no cellular network coverage.

The system consists of three different node types that work together to ensure emergency messages reach responders through either LTE or a LoRa relay network.

---

## 🚨 Problem

Road accidents frequently occur in remote areas where cellular connectivity is unreliable or unavailable. This can delay emergency notifications, increasing response time and reducing the chances of timely medical assistance.

---

## 💡 Solution

CrashLink consists of three node types:

-  Vehicle Node
-  Relay Node
-  Gateway Node

When LTE coverage is available, alerts are sent directly over the cellular network.

If LTE is unavailable, CrashLink automatically switches to a LoRa relay network, forwarding the emergency message until it reaches a Gateway Node.

---

#  System Architecture

<p align="center">
<img src="assets/architecture_v1.png" width="900">
</p>

---

#  Vehicle Node

### PCB Layout

<p align="center">
<img src="hardware/pcb/vechile_node/PCB_vn_v1.png" width="800">
</p>

### PCB Views

| Top | Bottom |
|------|---------|
| ![](hardware/pcb/vechile_node/2D_vn_top_v1.png) | ![](hardware/pcb/vechile_node/2D_vn_bottom_v1.png) |

### 3D Model

<p align="center">
<img src="hardware/pcb/vechile_node/3D_vn_v1.png" width="700">
</p>

### Enclosure

<p align="center">
<img src="assets/images/Journal/June20.0.png" width="700">
</p>

---

#  Relay Node

### PCB Layout

<p align="center">
<img src="hardware/pcb/relay_node/PCB_rn_v1.png" width="800">
</p>

### PCB Views

| Top | Bottom |
|------|---------|
| ![](hardware/pcb/relay_node/2D_rn_top_v1.png) | ![](hardware/pcb/relay_node/2D_rn_bottom_v1.png) |

### 3D Model

<p align="center">
<img src="hardware/pcb/relay_node/3D_rn_v1.png" width="700">
</p>

### Enclosure

<p align="center">
<img src="assets/images/Journal/June20.2.png" width="700">
</p>

---

#  Gateway Node

### PCB Layout

<p align="center">
<img src="hardware/pcb/gateway_node/PCB_gn_v1.png" width="800">
</p>

### PCB Views

| Top | Bottom |
|------|---------|
| ![](hardware/pcb/gateway_node/2D_gn_top_v1.png) | ![](hardware/pcb/gateway_node/2D_gn_bottom_v1.png) |

### 3D Model

<p align="center">
<img src="hardware/pcb/gateway_node/3D_gn_v1.png" width="700">
</p>

### Enclosure

<p align="center">
<img src="assets/images/Journal/June20.1.png" width="700">
</p>

---

# 📊 Current Progress

- [x] System architecture designed
- [x] Vehicle Node schematic
- [x] Vehicle Node PCB
- [x] Vehicle Node Gerbers
- [x] Vehicle Node enclosure
- [x] Relay Node schematic
- [x] Relay Node PCB
- [x] Relay Node Gerbers
- [x] Relay Node enclosure
- [x] Gateway Node schematic
- [x] Gateway Node PCB
- [x] Gateway Node Gerbers
- [x] Gateway Node enclosure
- [ ] Prototype assembly
- [ ] Firmware development
- [ ] Field testing

---

# 🔩 Hardware

- ESP32
- SX1278 LoRa Module
- A7670C-LANS LTE Module
- NEO-6M GPS Module
- MPU6050 IMU

📄 **Detailed Bill of Materials:** [docs/bom.md](docs/bom.md)

---

# 📜 License

This project is licensed under the MIT License.