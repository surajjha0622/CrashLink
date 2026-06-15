---
title: "CrashLink"
author: "SURAJ K. JHA"
description: "CrashLink is a hybrid LTE + LoRa based emergency alert system."
created_at: "2026-06-03"
---

# June 3: The Origin of idea & setting up github repo

Was walking on the roof and suddenly it clicked.
The road safety AI Hackathon I read about few days ago.
I wrote down the ideas came to my head.
How an automatic alert can save many people who
die cause no help reach to them quickly due to late information about crashes etc.
Planned the whole thing and visualised it in my head about
the flow of alert message and the placement of devices etc.


**Total time spent: 2 hours**

# June 4: VS code setup and some coding aswell

Spent good time setting up VS code setup
also did some coding not much just wrote structure for all 3 nodes.
Did a bit extra for Vehicle node and added Detect crash function for it.

![Some Coding](assets/images/Journal/June5.0.png)


**Total time spent: 57 minutes**

# June 6: PCB design for Vehicle node
It felt i forgot everything coz last time i designed was 1.5 years ago.
somehow I managed to do it although in the end i couldnt fine how to place hole in this easy eda pro software.

![Vehicle Node](assets/images/Journal/June6.0.png)
![Lapse Recording](https://lapse.hackclub.com/timelapse/vquPurF1DCEv)


**Total time spent: 3 hours 54 minutes**

# June 7: Architecture Diagram
Used draw.io to draw diagram of How the whole system will work. I felt amazing after looking at it because it simplified everything in the brain and I could feel the flow of commmunications through it.

![Architecture Diagram](assets/images/architecture_v1.png)

[Lapse Recording](https://lapse.hackclub.com/timelapse/MV4wL9otCHe_)

**Total time spent: 1 hours 20 minutes**

# June 8 : Revised vechicle node PCB & Made Relay Node PCB
I redesigned the Vehicle node PCB and Revised its schematics. I basically re organized the components in Schematics dividing it into different sections like communication,power,etc... 
Also i made Relay Node PCB schematics and PCB design

then I pushed the vehicle node PCB design gerbers and images to github.

![Revised Vechicle Node PCB](assets/images/Journal/June8.0.png)
![Revised Vechicle Node PCB](assets/images/Journal/June8.2.jpeg)
[Lapse Recording](https://lapse.hackclub.com/timelapse/5CicOemg2tyk)

**Total time spent: 4 hours 53 minutes**

# June 9 : Documentation => Wrote README.md and spent some time reassesing pcb design
It is very frustrating to wite out and document things like this but I think this is what makes the other parts more intresting. so yeah i did wrote Readme folder and stared at PCB for few hours and yes very productive hours because i found nothing
also ended up unsatisfied with the README which i wrote.

![Analysing PCB ](assets/images/Journal/June9.1.jpeg)
![Analysing PCB ](assets/images/Journal/June9.2.jpeg)
![Analysing PCB ](assets/images/Journal/June9.3.jpeg)


**Total time spent: 43 min**

# June 10 : More Documentation => README, BOM
Spent some good time making BOM and in between i switched to making Readme and felt satifying then i got back to working on the BOM i think its finally done.
I had to search multiple sites and compare the prices so it took too much time.


![Refined README](assets/images/Journal/June10.0.png)
![Refined README](assets/images/Journal/June10.1.png)
![Made BOM](assets/images/Journal/June10.3.png)

**Total time spent: 4 hour**

# June 11 : Completed documentation & and pitched for forge
Finished importand documentation and submitted my pitch to forge slack channel.
Important documentation includes Final checks for BOM,README and overr all folder structure.

![Forge pitch](assets/images/Journal/June11.0)

**Total time spent: 30 min**

# June 12 : Big Blunder Reveal
So I was going through datasheets and doing some design reviews and and and I found out i didn't
include the sim socket in the PCB design well this was very stupid error i would say.

Also i didn't include power filter at voltage inputs(Decoupling capacitors).

then I fixed the journal timing thing idk why the hacktime is 1 day behind my actual work whatever....i do have lapse recordingss

[Journal Fixing](https://lapse.hackclub.com/timelapse/1WFZ6ML9bd7k)
[Research + More Fixing](https://lapse.hackclub.com/timelapse/yP9O9QBxnpig)
[More Research](https://lapse.hackclub.com/timelapse/8O7ItGtjQ06I)
[Reviewing past work and more research](https://lapse.hackclub.com/timelapse/ehilIq9ZyCS3)

**Total time 2 hours 30 minutes**

# June 13 : Big Day Bhery Productive 
I sit down with one goal in mind that was to finish the PCB Design work.I got done with the vehicle node pcb and 80% of the relay node aswell.
used reference designs from Datasheets and also added the sim socket which i missed last time.
Tbh lots of time it took to search for part number that is there in Easy EDA.

![Vehicle Node design](assets/images/Journal/June13.0.png)
![Vehicle Node design](assets/images/Journal/June13.1.png)
![Vehicle Node design](assets/images/Journal/June13.2.png)
![Lapse PCB Designing](https://lapse.hackclub.com/timelapse/mqEL4IdIFe5i)
[Lapse PCB Designing](https://lapse.hackclub.com/timelapse/OPMM19FXR9UI)

**Total time 4 hours 30 minutes**

# June 14 : Finishing the job for remaining
 So I had somer unfinished job from the relay node
 and also designing gateway node.
 at starting i thought it would be just a cope paste thing as schematics etc are same and yes it did made it a bit easy but the challanging part came....components placement and routing.
 I did complete the relay node pcb designing and exported them to push on github.

Also did some documentation(off the record).

![Relay Node design](assets/images/Journal/June14.0.png)
![Gateway Node design](assets/images/Journal/June14.1.png)

 [Lapse PCB Designing](https://lapse.hackclub.com/timelapse/YgPzBqFPpGOS)
 

 **Total time 5 hours**

