# Wireless Event-Based Kill-Switch for UAS  

**Authors**: Jahir Uddin, Muntasir Ahad, Abdulla Hil Kafi  

---

## Overview  
A **wireless kill-switch** for unmanned aerial systems (UAS), capable of:  
- Controlling up to **16 drones** (individually or all at once)
- The code represents only one for now.
- **Manual, Terminate-All, Revive-All, Intelligent modes**  
- Secure communication with **CRC & acknowledgement**  

---

## Hardware  
- **Sender**: ATmega328, HC12 (433 MHz), 7 toggle switches, LiPo battery  
- **Receiver**: ATmega328, HC12, relay, ESC 5V input, sensors (LiDAR, gyro, temp, compass)  

---

## Circuit  

![sender.png](https://github.com/BRACU-DICHARI/Wireless-Kill-switch/blob/main/sender.png) 
![receiver.png](https://github.com/BRACU-DICHARI/Wireless-Kill-switch/blob/main/receiver.png)

---

## Data Format  
`4 bits ID + 1 bit Ack + 1 bit Mode + 1 bit Data + 2 bits CRC`  

---

## Results  
- Range: stable at **127 m**  
- Kill-switch reduces ESC output current to **0 mA**
- [Please see the paper for the detailed results](https://ieeexplore.ieee.org/document/10049917) 

---

## Future Work  
- Soft kill with parachute  
- More than 16 drones  
- ML for advanced intelligent mode  

---

## Citation  
If you use this work, cite:  

> J. Uddin, M. Ahad and A. Hil Kafi, "Wireless event-based kill-switch for safe and autonomous UAS operation," 2023 International Conference on Electronics, Information, and Communication (ICEIC), Singapore, 2023, pp. 1-4, doi: 10.1109/ICEIC57457.2023.10049917. keywords: {Wireless communication;Authorization;Decision making;Behavioral sciences;Communication system security;Drones;Wireless Communication;Kill-switch;UAS;Drone;Intelligent;Circuit;Robotics;Algorithm},



---
