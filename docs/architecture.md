# Crashlink Architecture

## Goal

Crashlink is a hybrid emergency alert system for vehicles.

![Architecture](../images/architecture/architecture_v1.png)

when cellular network is available then it uses LTE/GSM.

when network is not available in the area in consideration then it uses LoRa relay network to send the alert to nearest Gateway node.

Gateway node then transfers the alert via LTE/GSM.
Gateway nodes are strategically placed in the network available zones only.

## Vehicle node

 It detects the crash using the inputs from IMU and collect the GPS data from the GPS module.
 Now it scans for the availability of cellular network. If the network is available then it sends the alert signal via LTE and if the cellular coverage is not there then it sends the alert via LoRa over the LoRa network.

 ## Relay Node(s)
 It Recieves alerts from vehicle Node and Retransmits it if certain conditions are met.
 The Relay node(s) covers the area of no cellular coverage, acting as a backup fallback network and a bridge between the Vehicle Node and the Gateway Node.

 ## Gateway Node

 It is strategically placed to cover both the Relay node and cellular coverage in its range.
 This enable it to recieve the alerts from the Relay nodes and send alert over to cellular network.

Thus the system uses the cellular network coverage which is already available while also fills the gaps of no cellular connectivity and that too at low cost.
