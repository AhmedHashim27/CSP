
# 🌞 Solar Power Tower Project

Welcome to the Solar Power Tower Project! This guide will help you understand the project and get it up and running in no time.

## 📖 Project Overview

According to the International Energy Agency (IEA), energy consumption worldwide is expected to grow by 70-100% by 2050, representing a global problem in ascending electric consumption and global warming. This project introduces a new technique for exploiting Egypt's natural resources in the production of energy, solving grand challenges through land reconstruction, and reducing costs while maintaining sustainable efficiency.

## 🗂️ Project Structure

Here's a quick look at the project files:

- **/code**: Contains the main code files for the Solar Power Tower project.
- **/hardware**: Information on the hardware components used.
- **/schematics**: Circuit diagrams and connection schematics.
- **/documentation**: Additional project documentation and resources.
- **README.md**: This file, explaining how to set up and use the project.

## 🚀 Getting Started

Follow these steps to get your Solar Power Tower project up and running:

### 1. Gather the Required Components
You'll need the following components:
- Microcontroller (e.g., Arduino)
- LDR sensors
- Servo motors
- Power supply
- Breadboard and jumper wires

### 2. Clone the Repository
First, download the project files. Open your terminal and run:

```bash
git clone https://github.com/your-username/solar-power-tower.git
cd solar-power-tower
```

### 3. Install the Arduino IDE
Make sure you have the Arduino IDE installed on your computer. You can download it from [here](https://www.arduino.cc/en/software).

### 4. Open the Solar Power Tower Code
Open the Arduino IDE and navigate to File > Open. Select the `.ino` file located in the `/code` directory of this project.

### 5. Connect the Components
Follow the schematics provided in the `/schematics` folder to connect your Solar Power Tower components to the microcontroller.

### 6. Upload the Code
Connect your microcontroller to your computer via USB. In the Arduino IDE, select the correct board and port from the Tools menu. Then, click the upload button to upload the code to your microcontroller.

### 7. Test the Solar Power Tower
Once the code is uploaded, make sure all connections are secure and observe the system's performance as it simulates the solar power generation process.

## 📝 Additional Resources
- Check the `/documentation` folder for more detailed instructions and troubleshooting tips.
- Visit the Arduino Project Hub for more information and community support.

## 🏆 Contributing
Feel free to contribute to this project by submitting issues or pull requests. We welcome all improvements and suggestions!

Enjoy building and optimizing your Solar Power Tower! If you have any questions, feel free to reach out. Happy coding! 🎉

## 📜 Code

```cpp
#include <Servo.h>
int ldr = A0;
int value = 0;
int ldr1 = A1;
int value1 = 0;
int val = 0;

Servo myservo;
Servo myservo1;
Servo wheel;

int pos = 0;
int pos1 = 0;

void setup() {
  myservo.attach(9);
  myservo1.attach(10);
  wheel.attach(11);
}

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  value = analogRead(ldr);
  value1 = analogRead(ldr1);
  val = value - value1;
  if (abs(val) > 2) {
    for (int p = 0; p <= 180; p += 30) {
      Serial.println(val);
      pos1 += val;
      myservo.write(pos1);
      myservo1.write(pos1);
      delay(2);
      wheel.write(p);
      delay(2);
      myservo.write(pos);
      myservo1.write(pos);
      pos = pos1;
      delay(2);
    }
  }
}
```

## 📊 Extracted Graphs/Images

Below are some key graphs and images extracted from the project documentation:

![Extracted Graphs](./extracted_graphs.png)

## 📸 Poster Image

![Poster Image](./first_page_image.png)
