# 🌍 IoT Air Quality Monitor (CodTech Internship Task 4)

## 🔧 Goal
Monitor air quality (CO2 / PM2.5) and display real-time and historical data on a cloud dashboard using ESP8266 and sensors.

---

## 🧰 Components Used
- MQ135 Gas Sensor
- NodeMCU ESP8266
- Jumper Wires
- ThingSpeak Platform

---

## 📶 Data Flow
Sensor → NodeMCU → Wi-Fi → ThingSpeak Dashboard (Cloud)

---

## ⚙️ Features
- Detect CO2 levels in PPM
- Send live data every 15 seconds
- View historical graphs on dashboard

---

## 📡 Cloud Setup (ThingSpeak)
1. Create account on [https://thingspeak.com](https://thingspeak.com)
2. Create new channel → Add Field 1: "CO2 Level"
3. Go to API Keys → Copy Write API key
4. Replace it in code

---

## 🔌 Wiring (MQ135 to NodeMCU)
| MQ135 Pin | NodeMCU |
|-----------|---------|
| VCC       | 3.3V    |
| GND       | GND     |
| AOUT      | A0      |

---

## 📝 Deliverable
- Working prototype
- Sends real-time CO2 data
- Visible cloud dashboard with historical trends

✅ Task 4 done for CodTech Internship 🎯
