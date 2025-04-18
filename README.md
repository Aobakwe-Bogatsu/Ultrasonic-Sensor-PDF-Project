# Ultrasonic-Sensor-PDF-Project

## 📌 Project Description
This project evaluates the **accuracy and consistency** of a hobby ultrasonic distance sensor by collecting real-time distance data and generating a **Probability Density Function (PDF)** from it. The experiment is simulated using **Tinkercad**, and data is interpreted visually with **Processing**.

---

## 🎯 Purpose
- Test ultrasonic sensor accuracy at multiple distances.
- Collect 100+ data samples per distance.
- Analyse the data using a histogram to visualise measurement consistency.

---

## 🧰 Equipment Used
- HC-SR04 Ultrasonic Distance Sensor
- Arduino (Uno)
- 3 Servo Motors
- Tinkercad (for simulation)
- Processing (for visualisation)

---

## 🔌 Pin Configuration

| Component          | Arduino Pin |
|--------------------|-------------|
| Trigger (HC-SR04)  | 11          |
| Echo (HC-SR04)     | 10          |
| Servo 1            | 3           |
| Servo 2            | 6           |
| Servo 3            | 9           |

---

## 🧪 Tinkercad Simulation Instructions

🔗 **[Click to open Tinkercad Project](https://www.tinkercad.com/things/gyX0IMKbgek-grand-bojo-jaban/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits)**

### How to simulate:
1. Open the Tinkercad project via the link above.
2. Click **"Start Simulation"**.
3. Open the **Serial Monitor** to view the output.
4. Tap the **Ultrasonic Sensor** to activate it.
5. Move the obstacle around to simulate different distances.
6. Observe real-time distance readings printed on the Serial Monitor.

---

## 📊 Data Analysis (Processing Sketch)

Use the included Processing sketch (`data_visualisation.pde`) to:
- Read serial distance values.
- Generate a histogram showing data distribution.
- Calculate and display mean and median.

> 📌 Make sure Arduino is outputting to the correct serial port when using Processing.

---

## 💾 Project Files

| File Name                              | Description                                    |
|----------------------------------------|------------------------------------------------|
| `sonar_distance_sensor.ino`            | Arduino sketch to collect ultrasonic data      |
| `Sonar Distance Sensor PDF.brd`        | Board layout file (for Fritzing or reference)  |
| `Sonar Distance Sensor  PDF.png`       | Circuit diagram (wiring reference)             |
| `data_visualisation.pde`               | Processing sketch to visualise the data        |

---

## 📂 How to Use These Files

1. Open `sonar_distance_sensor.ino` in the Arduino IDE and upload to your board.
2. Use `data_visualization.pde` in Processing to interpret logged serial data.
3. View `Sonar Distance Sensor  PDF.png` for circuit reference.
4. Open `.brd` file in **Fritzing** (optional) for editable circuit layout.

---

## 📎 License
This project is open-source under the [MIT License](LICENSE). You're welcome to use, adapt, and share with proper credit.

---

## 🙋‍♂️ Author

**Aobakwe Bogatsu**  
Computer Systems Engineering Student 
