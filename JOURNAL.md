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

![Documentation](assets/images/Journal/August5.0.png)
![Documentation](assets/images/Journal/August5.1.png)
![Documentation](assets/images/Journal/August5.2.png)
![Documentation](assets/images/Journal/August5.3.png)
![Documentation](assets/images/Journal/August5.4.png)
![Documentation](assets/images/Journal/August5.5.png)
![Documentation](assets/images/Journal/August5.6.png)
![Documentation](assets/images/Journal/August5.7.png)


I am still not sure of the trace width so it might need some change.
firstly I started with the vehical node pi matching network for A7670
then I did it for GPS aswell but but I dont  think it was needed for the GPS.

- [Lapse](http://lapse.hackclub.com/timelapse/U3hexZDmZmPl)
- [Lapse](https://lapse.hackclub.com/timelapse/aronYUaw0zdo)
- [Lapse](https://lapse.hackclub.com/timelapse/7AQ2QLC01Yy2)

Although I finished this still i do feel something is missing here.

**Total time spent: 3 hours 10 minutes**

# August 7 : Reviewing the designs and Finding Flaws

After looking at my current design which uses ESP32 Waveshare Board(An expensive board around 11 dollars)
so I made my mind to reduce the cost by droping the ESP32 Waveshare devkit board.
I researched a bit and found out that ESP-32 WROOM32E N8 module is a good alternative
and its better to redesign the board around this module instead of using  devkit.

![Documentation](assets/images/Journal/August7.0.png)

so I searched for the datasheets and got ESP32 devkitC v4 reference designs
which was very reliable so i decided to use it as an Inspiration.

![Documentation](assets/images/Journal/August7.1.png)

Also I decided to Replace the NEO6m with MAX-M10S as this is newer module
and multiple hardware creators and forums suggested using this one(since i was already gonna be redesigning so no issues).

![Documentation](assets/images/Journal/August7.2.png)

The new GPS module also contains internal LNA and SAW filters making it more reliable and less hassle.
**Total time spent: 35 minutes**

# August 9 : Updating the Schematics with new Components & correcting past mistakes

Corrected mistakes in the MPU-6050 by following the Datasheets & took Some help from AI aswell as I was completely stuck.
I could not find much of reference designs for this so I used external reference from adafruit's design.

Added new components GPS(MAX-M10S) Spent good time on Reading its Datasheets and closely following its Reference designs.

![Documentation](assets/images/Journal/August9.0.png)
![Documentation](assets/images/Journal/August9.1.png)
![Documentation](assets/images/Journal/August9.2.png)
![Documentation](assets/images/Journal/August9.3.png)

- [Lapse](https://lapse.hackclub.com/timelapse/a8KgVX0sD21Z)

**Total time spent: 1 hours 19 minutes**

# August 10 : Completed Schematics and Made it look less messy

Started updating where i left yesterday.
![Documentation](assets/images/Journal/August10.0.png)
struggled in finding the right connections and spent whole lot of time in the Datasheets and reference designs and also took some AI help in knowing if i am getting the things right or not.
![Documentation](assets/images/Journal/August10.1.png)
for example I replaced the nomal USB connector to USB C for programming
![Documentation](assets/images/Journal/August10.2.png)
![Documentation](assets/images/Journal/August10.3.png)
and i got stuck at doing the connections right since things got different from reference designs .
![Documentation](assets/images/Journal/August10.4.png)
![Documentation](assets/images/Journal/August10.5.png)

then i re checked everything and made  the GSM cluttered seperated parts into one block

I also re organized the whole schematics to make it look good  like boxed the different sections and wrote what each sections do.

-[Lapse](https://lapse.hackclub.com/timelapse/juxAB3uTijgG)

**Total time spent: 4 hours**

# August 12 : Sanity check myself plus AI(Ai not reliable I know)

So I Had Almost completed the Schematics and organized it as well
but while doing this 4 hr session my brain got fried and i did many mistakes.

![Documentation](assets/images/Journal/August12.0.png)

I already had this feeling so I decided to match the schematics resistor by resitor and capaxitor by capacitor to see if each value matches or not.
![Documentation](assets/images/Journal/August12.1.png)
![Documentation](assets/images/Journal/August12.2.png)
![Documentation](assets/images/Journal/August12.3.png)
![Documentation](assets/images/Journal/August12.4.png)

AI Flagged Many issues which I crosschecked with the Datasheets

-There were some issues with value of resisors and capacitors for many connections which i fixed.
-Two switches for EN & IO0 was not connected so I fixed that issue aswell
-Then I did sent Ai to check if everything is okay or should I change things 
-They gave some useful and some suspicious insights 
-Two pins AD0 and FSYNC was left floating (Good insight)
-REGPIN needs to be connected to capacitor(It was already connected lol)
-A7670 rF matching circuit being different from datasheets(it wasnt i checked or maybe if it was i will ask reviewrs to flag it idk)
-MAX-M10S needs filter circuit(The datasheet said its not needed as internal filter(LNA & SAW) Provides enough gain even with passive antenna and no matching network still I added one matching circuit)

-[Lapse](https://lapse.hackclub.com/timelapse/Z1DkRJ5dDHLi)

**Total time spent: 2 hours 50 minutes**

# August 17 : Redesigned the Schematics based on reviews from forums

I did redesign the schematis based on the reviews I recieved from forums.
I had to change the GND and VCC lables oriantation to make it more clear and readable.
Since I didnt have much experience in designing schematics I was not aware of the best practices 
and also I did some mistakes in the schematics which were pointed out by the reviewers.
So while correcting the mistakes I decided to make the schematics more readable and clear by changing the orientation of GND and VCC lables.

![Documentation](assets/images/Journal/August17.0.png)
![Documentation](assets/images/Journal/August17.1.png)
![Documentation](assets/images/Journal/August17.2.png)
![Documentation](assets/images/Journal/August17.3.png)
![Documentation](assets/images/Journal/August17.4.png)
![Documentation](assets/images/Journal/August17.5.png)
![Documentation](assets/images/Journal/August17.6.png)
![Documentation](assets/images/Journal/August17.7.png)
![Documentation](assets/images/Journal/August17.8.png)

-[Lapse](https://lapse.hackclub.com/timelapse/NjYyMp_WeuBR)

**Total time spent: 3 hours**

# August 23 : Components Placement

Did some components placement for the Vehicle Node PCB.

![Documentation](assets/images/Journal/August23.0.png)
![Documentation](assets/images/Journal/August23.1.png)

-[Lapse](https://lapse.hackclub.com/timelapse/4TAuZ8aOGD1O)

**Total time spent: 10 minutes**

# August 24 : Rechecking the schematics 

Rechecked schematics to make sure everything is correct before components placement.

![Documentation](assets/images/Journal/August24.0.png)
![Documentation](assets/images/Journal/August24.1.png)

-[Lapse](https://lapse.hackclub.com/timelapse/4WwzJtN6IJTy)

**Total time spent: 11 minutes**

# August 30 : Schematics final review and components layout

Reviewed the schematics again and started components placement for the Vehicle Node PCB.
I was making sure things are right so I dont have to do it all over again and waste more time.

![Documentation](assets/images/Journal/August30.0.png)
![Documentation](assets/images/Journal/August30.1.png)
![Documentation](assets/images/Journal/August30.2.png)
![Documentation](assets/images/Journal/August30.3.png)
![Documentation](assets/images/Journal/August30.4.png)
![Documentation](assets/images/Journal/August30.5.png)

-[Lapse](https://lapse.hackclub.com/timelapse/gtR_OZKRY4YQ)
-[Lapse](https://lapse.hackclub.com/timelapse/MzfHQj-2OC5a)
-[Lapse](https://lapse.hackclub.com/timelapse/2r6uieEUwuba)

**Total time spent: 3 hours 7 minutes**


# August 31 : PCB Routing

Started where I left yesterday and did some PCB routing for the Vehicle Node PCB.
Calculated the trace width for different current carrying traces and also calculated the impedance for the RF traces.

![Documentation](assets/images/Journal/August31.0.png)
![Documentation](assets/images/Journal/August31.1.png)
![Documentation](assets/images/Journal/August31.2.png)
![Documentation](assets/images/Journal/August31.3.png)

-[Lapse](https://lapse.hackclub.com/timelapse/r-711xNIIBVX)

**Total time spent: 56 minutes**

# September 11 : PCB Routing continued
Continued PCB routing for the Vehicle Node PCB.
I couldn't complete the routing for thr vehicle node PCB due to inefficient components placement and also the lack of experience in PCB routing.
So I decided to redo the components placement inorder to make the routing easier and more efficient.

![Documentation](assets/images/Journal/September11.0.png)
![Documentation](assets/images/Journal/September11.1.png)
![Documentation](assets/images/Journal/September11.2.png)
![Documentation](assets/images/Journal/September11.3.png)
![Documentation](assets/images/Journal/September11.4.png)

-[Lapse](https://lapse.hackclub.com/timelapse/KzY4xmlv9PIN)
-[Lapse](https://lapse.hackclub.com/timelapse/Ul62O42vbcV5)

**Total time spent: 3 hours  24 minutes**

# September 12 : Vehicle node completion and Relay node PCB desinging

Completed the vehicle node pcb design and started the relay node pcb design.

![Documentation](assets/images/Journal/September12.0.png)
![Documentation](assets/images/Journal/September12.1.png)
![Documentation](assets/images/Journal/September12.2.png)
![Documentation](assets/images/Journal/September12.3.png)
![Documentation](assets/images/Journal/September12.4.png)
![Documentation](assets/images/Journal/September12.5.png)
![Documentation](assets/images/Journal/September12.6.png)
![Documentation](assets/images/Journal/September12.7.png)

-[Lapse](https://lapse.hackclub.com/timelapse/ORXdWx_7uSSo)
-[Lapse](https://lapse.hackclub.com/timelapse/3pI1MOHgRht_)
-[Lapse](https://lapse.hackclub.com/timelapse/aJULvgt9BHPJ)
-[Lapse](https://lapse.hackclub.com/timelapse/5cZHhlXMjuUY)
**Total time spent: 4 hours  22 minutes**


# September 15 : PCB Design completed
Finally completed the PCB design for all PCB.
Did some silkscreen logo placement asnd added some text to the silkscreen layer.      


![Documentation](assets/images/Journal/September15.0.png)
![Documentation](assets/images/Journal/September15.1.png)
![Documentation](assets/images/Journal/September15.2.png)

-[Lapse](https://lapse.hackclub.com/timelapse/NRGSgt4EPpnt)

**Total time spent: 2 hours**

# September 18 : Vehicle Node Case Designing

Started the case designing for the vehicle node.
finally i felt like i am getting ahead after being studk for so long in the PCB design and schematics designing.
reviewing the datasheets and redesigning everything again and again was both frustrating and enjoying at times.

![Documentation](assets/images/Journal/September18.0.png)
![Documentation](assets/images/Journal/September18.1.png)
![Documentation](assets/images/Journal/September18.2.png)
![Documentation](assets/images/Journal/September18.3.png)

-[Lapse](https://lapse.hackclub.com/timelapse/vBgm35VssLQM)

**Total time spent: 2 hours  50 minutes**

# September 21 : Did assembly of buttons

Designed the button and assembled it using the align tool.

-[Lapse](https://lapse.hackclub.com/timelapse/1IBW2LysMw2Q)

**Total time spent: 4 minutes**

# September 24 : Added Antenna connectors holes

added coorect size of sketches for the antenna connector holes.

-[Lapse](https://lapse.hackclub.com/timelapse/Mo3BG-vl9tuq)

**Total time spent: 8 minutes**

# September 25 : Fixed the button in the case and led alignment in PCB

Did some fixing in the top cover of the vehicle node case. Redesigned the button to make it able to fit and be able to use properly.
Last time I designed it without thinking about how will it get in that hole if i make the cylederical narrow mid with joined wider top and bottom.
So I redesigned it to be sepearated top and bottom and noqw it will be able to overcome the prior issue.

Also did some fixing in the PCB led indicators placement. Although I could not make a bit fat change and improvement in the looks as of now but I think its better 
than previous one. I will try to make it better in the next iteration of PCB design.

![Documentation](assets/images/Journal/September25.0.png)
![Documentation](assets/images/Journal/September25.1.png)
![Documentation](assets/images/Journal/September25.2.png)
![Documentation](assets/images/Journal/September25.3.png)
![Documentation](assets/images/Journal/September25.4.png)
![Documentation](assets/images/Journal/September25.5.png)

-[Lapse](https://lapse.hackclub.com/timelapse/BpI8_1GiB8Tc)
-[Lapse](https://lapse.hackclub.com/timelapse/xLXZjsi9vt60)

**Total time spent: 1 hours  46 minutes**

# September 29 : Relay Node Case Designing

Imported the relay node PCB into fusion 360 and started designing the case for it.
Did the buttons , battery cover etc just like the vehicle node case.
I forgot the battery holder dimrnsions so took a reference from the vehicle node case design.

![Documentation](assets/images/Journal/September29.0.png)
![Documentation](assets/images/Journal/September29.1.png)
![Documentation](assets/images/Journal/September29.2.png)
![Documentation](assets/images/Journal/September29.3.png)

-[Lapse](https://lapse.hackclub.com/timelapse/tVTwTWRjkFMt)
-[Lapse](https://lapse.hackclub.com/timelapse/s07hQxTj-hWg)
-[Lapse](https://lapse.hackclub.com/timelapse/Rt1oCnPwtjmD)

**Total time spent: 2 hours  7 minutes**

# September 30 : Added texts to the case top cover

Added some text on the cover of the case to fill the empty space and also to make it look more cool and good.

![Documentation](assets/images/Journal/September30.0.png)
![Documentation](assets/images/Journal/September30.1.png)

-[Lapse](https://lapse.hackclub.com/timelapse/QWbxXDP_rPG7)

**Total time spent: 1 hours  30 minutes**
