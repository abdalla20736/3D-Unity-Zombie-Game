# 🎮 3D Unity Zombie Game – Sensor Controlled with MPU-6050 and EMG

A fully interactive 3D zombie survival game developed in **Unity**, controlled using real-time body motion and muscle activity. This project combines **game development**, **embedded systems**, and **biomechatronics** to deliver an immersive gameplay experience using physical movements instead of traditional controls.

## 🧠 Project Summary

- **Platform:** Unity 3D (C#)
- **Control System:** MPU-6050 (gyroscope & accelerometer) + EMG (muscle) sensor
- **Microcontroller:** Arduino
- **Interface:** Serial communication between Arduino and Unity

## 🎮 Gameplay Features

- **Motion-Based Navigation**  
  Players control movement by physically rotating their arm, detected via the MPU sensor.

- **Muscle-Activated Actions**  
  Muscle contraction (measured via the EMG sensor) is used to perform key actions such as shooting.

- **Zombie Survival Mode**  
  Navigate a 3D environment filled with zombies and survive using motion- and muscle-based controls.

## 🔧 Technologies Used

- Unity 3D (C#)
- Arduino UNO
- MPU-6050 sensor
- EMG muscle sensor
- Serial communication (USB)
- Signal filtering & thresholding (for muscle activity detection)

## 🧩 How It Works

1. **Sensor Input:**  
   - MPU detects orientation data (roll, pitch, yaw).  
   - EMG detects muscle activity and sends signal when muscle flexes.

2. **Arduino Processing:**  
   - Reads and processes sensor data.  
   - Sends commands (e.g., move forward, fire) to Unity via serial port.

3. **Unity Integration:**  
   - C# scripts receive data from serial input.  
   - Character responds accordingly in real time.

## 🚀 Project Goals

- Explore alternative control schemes for gaming using human biomechanics.
- Demonstrate real-time sensor integration with game engines.
- Showcase a complete system that bridges physical interaction with virtual environments.

## Video
https://drive.google.com/file/d/1OWa7mFQxbSmK0dkQA3fWgR0XWI9XlyJM/view?usp=share_link

## 📁 Folder Structure
### Unity game files
https://drive.google.com/file/d/1yNGpAUgup-PGLHXFEwrnpL4QvVzD412-/view?usp=share_link

### Arduino sketches for sensor processing
/ZM_arduino_code.ino


