# 🚗 Smart Parking Detection System using ESP32

## 📌 Overview

This project is an **IoT-based Smart Parking Detection System** built using **ESP32**, **Ultrasonic Sensor**, **LED**, and **Buzzer**.

It detects the presence of a vehicle by measuring distance and indicates whether a parking slot is **occupied or empty**.

---

## ⚙️ Features

* Distance measurement using ultrasonic sensor
* Parking slot detection (Occupied / Empty)
* LED indication
* Buzzer alert system
* Real-time monitoring via Serial output

---

## 🧠 Project Description

This system uses an **ultrasonic sensor** to measure the distance between the sensor and an object (vehicle) and determines parking availability.

---

### 🔹 Ultrasonic Sensor Working

* The sensor uses two pins:

  * **Trigger (trig)** → sends sound waves
  * **Echo (echo)** → receives reflected waves

Process:

1. Trigger sends ultrasonic pulse
2. Signal reflects from object
3. Echo pin receives it
4. Time taken is measured

Distance is calculated using:

* Speed of sound formula

---

### 🔹 Distance Calculation

* The time taken for the signal to return is stored

* Distance is calculated based on that time

* If distance is small → object is near

* If distance is large → no object

---

### 🔹 Parking Detection Logic

* **Distance < 30 cm → Slot Occupied**
* **Distance ≥ 30 cm → Slot Empty**

---

### 🔹 LED Indication

* LED ON → Parking occupied
* LED OFF → Parking empty

---

### 🔹 Buzzer Alert

* Buzzer turns ON when object is detected
* Alerts presence of a vehicle

---

### 🔹 Serial Monitoring

The system displays:

* Distance in cm
* Parking status

Example:

* "Parking Slot is Occupied"
* "Parking Slot is Empty"

---

## 🔄 Working Flow

1. ESP32 triggers ultrasonic sensor
2. Sensor measures distance
3. Distance is calculated
4. If object detected within range:

   * LED turns ON
   * Buzzer activates
5. If no object:

   * LED turns OFF
6. Status is printed on Serial Monitor

---

## 🧠 Learning Outcomes

* Interfacing ultrasonic sensors
* Measuring distance using time calculation
* Using GPIO for input/output
* Implementing real-time detection systems
* Combining sensors with actuators

---

## 🚀 Future Enhancements

* Display distance on LCD/OLED
* IoT-based parking monitoring (mobile/web)
* Multi-slot parking system
* Camera-based detection
* Cloud data logging

---

## 👩‍💻 Author

**Amrutha D N**
