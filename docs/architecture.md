# Crashlink Architecture

## Goal

Crashlink is a hybrid emergency alert system for vehicles.

![Architecture](..images/architecture/architecture_v1.png)

when cellular network is available then it uses LTE/GSM.

when network is not available in the area in consideration then it uses LoRa relay network to send the alert to nearest Gateway node.

Gateway node then transfers the alert via LTE/GSM.
Gateway nodes are strategically placed in the network available zones only.

Vehicle node
          
