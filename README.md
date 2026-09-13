# Circadian Rhythm Simulator
## Submission for HackwestTX 2026

## Inspiration
I work for a research lab where my fellow researchers go to the lab every 12 hours just so they can either turn a light on or off for an experiment they are conducting. This made me wonder if there is anything similar that we could purchase so they wouldn't have to drive to campus everyday, including weekends and holidays, to switch on or off the lights. When I didn't find anything I did some research on how hard it would be to make it and turns out, not that hard. So I made it.

## What it does
It is a lighting system that currently consists of 7 LEDs, which turn themselves on and off every 12 hours to replicate day and night situations in research labs. As of right now, it is able to stay running for up to 60 days without needing any hardware changed out. There is no issues with it overheating or breaking down.

## How I built it
I simulated the circuit in Wokwi simulation app first. After the code was done and the simulation worked as expected, I built the system in real life, tested it with 1 minute intervals and it worked for an hour straight like that. I used an Arduino kit (1k resistors, LEDs, jumper wires, breadboard, Arduino Uno), C++ and Claude code.

## Challenges I ran into
I wanted to use a RTC module with the project which would be the saving grace and cherry on top in case of a power outage. Currently, my code starts at the same phase as before when the power goes out and comes back on. It doesn't get stuck in the wrong phase. An RTC module would have helped start over at the exact point where the timer would be had the power never gone out. So, it would know the real time even after a blackout and resume the light schedule at the correct point instead of restarting it. This would have helped make the project exponentially more trustworthy and useful. However, I don't have a RTC module and ordering one would take more than 24 hours to arrive which would be after the hackathon is over. I did order it anyways because I plan to use this in my research lab regardless.

## Accomplishments that I'm proud of
The project is something we can actually start using tomorrow if needed. (We will start Monday for real.) I am really proud of that. I also love the fact that the whole project, including the hardware parts used cost less than $10. It is useful, affordable and lasts a long time.

## What I learned
The main thing I learned or realized is that a hackathon project shouldn't take the full 24 hours to complete. I am a team of 1, I finished this whole project in less than 10 hours, it can start to be used in real scenarios as early as right now and it solves a problem that has been around for decades. 

## What's next for Circadian Rhythm Simulator
I will integrate the RTC module once that arrives so that we have a backup during potential power outages, that will give us the sense of security to leave the system by itself for more than 12 hours at a time, especially during the weekends and holidays.

Built with: Arduino, C++, Claude

Demo Link: https://youtube.com/shorts/R7rZCeqNEHc?si=Ni2dImGebwLfSBxH
