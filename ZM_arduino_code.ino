#include <MPU6050.h>
#include <Wire.h>

MPU6050 mpu;

//Pin number where the sensor is connected. (Analog 0)
#define EMG_PIN 0

/*-------------------------------- void setup ------------------------------------------------*/

void setup(){
  
   Serial.begin(9600);
   //Serial.println("initalize MPU650");
   while(!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G))
   {
   // Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
    delay(500);
    }
    mpu.calibrateGyro();

    mpu.setThreshold(3);

    checkSettings();
 
}

void checkSettings() { 
 // Serial.println(); Serial.print(" * Sleep Mode: "); Serial.println(mpu.getSleepEnabled() ? "Enabled" : "Disabled");
  //Serial.print(" * Clock Source: "); 
  switch(mpu.getClockSource()) 
  { 
    case MPU6050_CLOCK_KEEP_RESET: Serial.println("Stops the clock and keeps the timing generator in reset"); break;
    case MPU6050_CLOCK_EXTERNAL_19MHZ: Serial.println("PLL with external 19.2MHz reference"); break; 
    case MPU6050_CLOCK_EXTERNAL_32KHZ: Serial.println("PLL with external 32.768kHz reference"); break; 
    case MPU6050_CLOCK_PLL_ZGYRO: Serial.println("PLL with Z axis gyroscope reference"); break; 
    case MPU6050_CLOCK_PLL_YGYRO: Serial.println("PLL with Y axis gyroscope reference"); break; 
    case MPU6050_CLOCK_PLL_XGYRO: Serial.println("PLL with X axis gyroscope reference"); break; 
    case MPU6050_CLOCK_INTERNAL_8MHZ: Serial.println("Internal 8MHz oscillator"); break; 
    } 
    Serial.print(" * Gyroscope: "); 
    switch(mpu.getScale()) 
    { 
      case MPU6050_SCALE_2000DPS: Serial.println("2000 dps"); break; 
      case MPU6050_SCALE_1000DPS: Serial.println("1000 dps"); break; 
      case MPU6050_SCALE_500DPS: Serial.println("500 dps"); break; 
      case MPU6050_SCALE_250DPS: Serial.println("250 dps"); break; 
      } 

      
 }


/*--------------------------------  void loop  ------------------------------------------------*/

void loop(){

  //The "Value" variable reads the value from the analog pin to which the sensor is connected.
   int value = analogRead(EMG_PIN);

  Vector rawGyro = mpu.readRawGyro(); 
  Vector normGyro = mpu.readNormalizeGyro();

  int value1 = rawGyro.XAxis;
  int value2 = rawGyro.YAxis;
 
      Serial.println((String)"x,"+value1);
      delay(20);
      Serial.println((String)"y,"+value2);
      delay(20);  
      Serial.println((String)"EMG,"+value);
      delay(20);  
 
} 
