---
title: "CrashLink"
author: "SURAJ K. JHA"
description: "CrashLink is a hybrid LTE + LoRa based emergency alert system."
created_at: "2026-06-03"
---

# June 4: The Origin of idea & setting up github repo

Was walking on the roof and suddenly it clicked.
The road safety AI Hackathon I read about few days ago.
I wrote down the ideas came to my head.
How an automatic alert can save many people who
die cause no help reach to them quickly due to late information about crashes etc.
Planned the whole thing and visualised it in my head about
the flow of alert message and the placement of devices etc.

![Architecture Diagram](assets/images/architecture_v1.png)

**Total time spent: 1 hours**

# June 5: VS code setup and some coding aswell

Spent good time setting up VS code and configure everything properly.
also did some coding not much just wrote structure for all 3 nodes.
- Vehicle Node
- Relay Node
- Gateway Node

Did a bit extra for Vehicle node and added detectcrash() function for it.

![Some Coding](assets/images/Journal/June5.0.png)


**Total time spent: 1 hours**

# June 6: PCB design for Vehicle node
It felt i forgot everything coz last time I designed PCB was 1.5 years ago.
somehow I managed to do it although in the end i couldnt find how to place hole in this easy eda pro.

![Vehicle Node](assets/images/Journal/June6.0.png)
- [Lapse Recording](https://lapse.hackclub.com/timelapse/vquPurF1DCEv)


**Total time spent: 4 hours**

# June 7: Architecture Diagram
Used draw.io to draw diagram of How the whole system will work. I felt amazing after looking at it because it simplified everything in the brain and I could feel the flow of commmunications through it.

![Architecture Diagram](assets/images/architecture_v1.png)

- [Lapse Recording](https://lapse.hackclub.com/timelapse/MV4wL9otCHe_)

**Total time spent: 1 hours 30 minutes**

# June 8 : Revised vechicle node PCB & Made Relay Node PCB
I redesigned the Vehicle node PCB and Revised its schematics. I basically re organized the components in Schematics dividing it into different sections like:
- Power
- Communication
- sensors
- Processing

Also i made Relay Node PCB schematics and PCB design

then I pushed the vehicle node PCB design gerbers and images to github.

![Revised Vechicle Node PCB](assets/images/Journal/June8.0.png)
![Revised Vechicle Node PCB](assets/images/Journal/June8.2.jpeg)
- [Lapse Recording](https://lapse.hackclub.com/timelapse/5CicOemg2tyk)

**Total time spent: 5 hours**

# June 9 : Documentation => Wrote README.md and spent some time reassesing pcb design
It is very frustrating to wite out and document things like this but I think this is what makes the other parts more intresting. so yeah i did wrote Readme folder and stared at PCB for few hours and yes very productive hours because i found nothing
also ended up unsatisfied with the README which i wrote.

![Analysing PCB ](assets/images/Journal/June9.1.jpeg)
![Analysing PCB ](assets/images/Journal/June9.2.jpeg)
![Analysing PCB ](assets/images/Journal/June9.3.jpeg)


**Total time spent: 1 hours**

# June 10 : More Documentation => README, BOM
Spent some good time making BOM and in between I revisited to write Readme and i think its well written now... then i got back to working on the BOM i think its finally done.
I had to search multiple sites and compare the prices so it took too much time.


![Refined README](assets/images/Journal/June10.0.png)
![Refined README](assets/images/Journal/June10.1.png)
![Made BOM](assets/images/Journal/June10.3.png)

**Total time spent: 4 hours**

# June 11 : Completed documentation & and pitched for forge
Finished importand documentation and submitted my pitch to forge slack channel.
Important documentation includes Final checks for BOM,README and overr all folder structure.

![Forge pitch](assets/images/Journal/June11.0.png)

**Total time spent: 1 hours**

# June 12 : Big Blunder Reveal
So I was going through datasheets and doing some design reviews and and and I found out i didn't
include the sim socket in the PCB design well this was very stupid error i would say.

Also i didn't include power filter at voltage inputs(Decoupling capacitors).

then I fixed the journal timing thing idk why the hacktime is 1 day behind my actual work whatever....i do have lapse recordings.

![Lapse screenshot](assets/images/Journal/June12.0.png)
- [Journal Fixing](https://lapse.hackclub.com/timelapse/1WFZ6ML9bd7k)
- [Research + More Fixing](https://lapse.hackclub.com/timelapse/yP9O9QBxnpig)
- [More Research](https://lapse.hackclub.com/timelapse/8O7ItGtjQ06I)
- [Reviewing past work and more research](https://lapse.hackclub.com/timelapse/ehilIq9ZyCS3)

**Total time spent: 2 hours 30 minutes**

# June 13 : PCB Design Major part done 
I sit down with one goal in mind that was to finish the PCB Design work.I got done with the vehicle node pcb and 80% of the relay node aswell.
used reference designs from Datasheets and also added the sim socket which i missed last time.
Tbh lots of time it took to search for part number that is there in Easy EDA.


![Vehicle Node design](assets/images/Journal/June13.0.png)
![Vehicle Node design](assets/images/Journal/June13.1.png)
![Vehicle Node design](assets/images/Journal/June13.2.png)
- [Lapse PCB Designing](https://lapse.hackclub.com/timelapse/mqEL4IdIFe5i)
- [Lapse PCB Designing](https://lapse.hackclub.com/timelapse/OPMM19FXR9UI)

Also did some documentation around 30 min

**Total time spent: 4 hours 45 minutes**

# June 14 : Finishing the job for remaining
 So I had somer unfinished job from the relay node
 and also designing gateway node.
 at starting i thought it would be just a cope paste thing as schematics etc are same and yes it did made it a bit easy but the challanging part came....components placement and routing.
 I did complete the relay node pcb designing and exported them to push on github.

![Relay Node design](assets/images/Journal/June14.0.png)
![Gateway Node design](assets/images/Journal/June14.1.png)

- [Lapse PCB Designing](https://lapse.hackclub.com/timelapse/YgPzBqFPpGOS)

Also did some documentation around 25 min.
 

 **Total time spent: 5 hours**

# June 15 : Gateway Node PCB completed
Finally completed the PCB design for Gateway Node
also re organized the layout for Vehicle node and Relay node
![3D Vehicle Node](assets/images/Journal/June15.0.jpeg)
![PCB Vehicle Node](assets/images/Journal/June15.1.jpeg)
![PCB Gateway Node](assets/images/Journal/June15.2.jpeg)
![3D Gateway Node](assets/images/Journal/June15.3.jpeg)
![3D Relay Node](assets/images/Journal/June15.4.jpeg)
![PCB Relay Node](assets/images/Journal/June15.5.jpeg)
- [Lapse PCB Designing](https://lapse.hackclub.com/timelapse/PSA4Y4LY7QzS)
**Total time spent: 2 hours 40 minutes**

# June 16 : Starting with enclosure Design
Downloaded and did setup for Fusion 360
started designing enclosure but suddenly the laptop freezeed.
Still I tried to fix it and then later I shifted to learning the designing
likw basic movements tools inside fusion 360.

![Fusion 360 Setup](assets/images/Journal/June16.0.jpeg)
![Importing File](assets/images/Journal/June16.1.jpeg)


**Total time spent: 1 hours**

# June 17 : Found flaws in Vehicle Node PCB Design
Found some flaws in my vehicle node pcb design
- No Antenna connector for GPS
- No pllup resistors for MPU6050

Explored the data sheets and used AI for debuging this new found issue
![Faults Analysis](assets/images/Journal/June17.0.jpeg)
![Faults Analysis](assets/images/Journal/June17.1.jpeg)
![Faults Analysis](assets/images/Journal/June17.2.jpeg)
![Faults Analysis](assets/images/Journal/June17.3.jpeg)
![Faults Analysis](assets/images/Journal/June17.4.jpeg)
![Faults Analysis](assets/images/Journal/June17.5.jpeg)
![Faults Analysis](assets/images/Journal/June17.6.jpeg)

**Total time spent: 2 hours**

# June 18 : Finally PCB Design done
I swear this is the final redesign no more change.
Finally I did follow everything as per whatever i found in the datasheets 
I redesigned the schematics of vehicle node then reorganized
all the nodes PCB designs enjoy the lapse.

![PCB Design](assets/images/Journal/June18.0.jpeg)
![PCB Design](assets/images/Journal/June18.1.jpeg)
![PCB Design](assets/images/Journal/June18.2.jpeg)
![PCB Design](assets/images/Journal/June18.3.jpeg)
![PCB Design](assets/images/Journal/June18.4.jpeg)
![PCB Design](assets/images/Journal/June18.5.jpeg)
![PCB Design](assets/images/Journal/June18.6.jpeg)
![PCB Design](assets/images/Journal/June18.7.jpeg)

- [Lapse](https://lapse.hackclub.com/timelapse/Fn2Z4zk5b6SL)

then off the lapse i exported files and did some documentation.

**Total time spent: 4 hours 30 minutes**

# June 19 : Started Enclosure Design
Tried to do Enclosure design but it didn't workout.
So like I did gave an hour but it took so much time to figure out how this thing works.

![Enclosure Design](assets/images/Journal/June19.0.jpeg)
![Enclosure Design](assets/images/Journal/June19.1.jpeg)
![Enclosure Design](assets/images/Journal/June19.3.jpeg)
![Enclosure Design](assets/images/Journal/June19.4.jpeg)

**Total time spent: 1 hours**

# June 20 : Enclosure Design completed

Finally Done with the Enclosure Designing
- **VehicleCase** took the longest 2 and half hours coz I wasnt familier with this tool yet.
- **RelayCase** would have taken less time but due to some orientation error while exporting it took 30min just to get started with the designing thing and then it took like 1hr to complete the design.
- **GatewayCase** Past learning showed up here and got done with the
 designing in just 45 min.


![Enclosure Design](assets/images/Journal/June20.0.png)
![Enclosure Design](assets/images/Journal/June20.1.png)
![Enclosure Design](assets/images/Journal/June20.2.png)

After all this did some documentation took around 20 min

**Total time spent: 5 hours**

# June 21 : Final design documentation
- Exported PCB and Enclosure designs
- Renamed the file names for better readability
- Organized exported files into repository structure
- Deleted Old design files
- Added Journal Entries

![Documentation](assets/images/Journal/June21.0.png)
![Documentation](assets/images/Journal/June21.1.png)

**Total time spent: 2 hours**

# August 5 : RF matching network fix

Got the feedback about the lack of  pi-matching network so
I fixed it as per the reference design of A7670C-LANS datasheet.

I am still not sure of the trace width so it might need some change.
firstly I started with the vehical node pi matching network for A7670
then I did it for GPS aswell but but I dont  think it was needed for the GPS.

- [Lapse](http://lapse.hackclub.com/timelapse/U3hexZDmZmPl)
- [Lapse](https://lapse.hackclub.com/timelapse/aronYUaw0zdo)
- [Lapse](https://lapse.hackclub.com/timelapse/7AQ2QLC01Yy2)

Although I finished this still i do feel something is missing here.

**Total time spent: 3 hours 10 minutes**

