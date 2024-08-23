// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// https://randomnerdtutorials.com/arduino-mpu-6050-accelerometer-gyroscope/
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        5// On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 30 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

Adafruit_MPU6050 mpu;

#define DELAYVAL 10 // Time (in milliseconds) to pause between pixels

int x0,y0,z0;
void setup() {

  // pinMode(4, OUTPUT);
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)

  // setup mpu-6050
  Serial.begin(115200);
  while (!Serial)
    delay(10); // will pause Zero, Leonardo, etc until serial console opens

  Serial.println("Adafruit MPU6050 test!");

  // Try to initialize!
  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }
  Serial.println("MPU6050 Found!");

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  Serial.print("Accelerometer range set to: ");
  switch (mpu.getAccelerometerRange()) {
  case MPU6050_RANGE_2_G:
    Serial.println("+-2G");
    break;
  case MPU6050_RANGE_4_G:
    Serial.println("+-4G");
    break;
  case MPU6050_RANGE_8_G:
    Serial.println("+-8G");
    break;
  case MPU6050_RANGE_16_G:
    Serial.println("+-16G");
    break;
  }
  mpu.setGyroRange(MPU6050_RANGE_250_DEG);
  Serial.print("Gyro range set to: ");
  switch (mpu.getGyroRange()) {
  case MPU6050_RANGE_250_DEG:
    Serial.println("+- 250 deg/s");
    break;
  case MPU6050_RANGE_500_DEG:
    Serial.println("+- 500 deg/s");
    break;
  case MPU6050_RANGE_1000_DEG:
    Serial.println("+- 1000 deg/s");
    break;
  case MPU6050_RANGE_2000_DEG:
    Serial.println("+- 2000 deg/s");
    break;
  }

  mpu.setFilterBandwidth(MPU6050_BAND_94_HZ);
  Serial.print("Filter bandwidth set to: ");
  switch (mpu.getFilterBandwidth()) {
  case MPU6050_BAND_260_HZ:
    Serial.println("260 Hz");
    break;
  case MPU6050_BAND_184_HZ:
    Serial.println("184 Hz");
    break;
  case MPU6050_BAND_94_HZ:
    Serial.println("94 Hz");
    break;
  case MPU6050_BAND_44_HZ:
    Serial.println("44 Hz");
    break;
  case MPU6050_BAND_21_HZ:
    Serial.println("21 Hz");
    break;
  case MPU6050_BAND_10_HZ:
    Serial.println("10 Hz");
    break;
  case MPU6050_BAND_5_HZ:
    Serial.println("5 Hz");
    break;
  }

  Serial.println("");
  delay(100);
  // calibration
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
  x0 = a.acceleration.x;
  y0 = a.acceleration.y;
  z0 = a.acceleration.z;
}

void loop() {
  /* Get new sensor events with the readings */
  sensors_event_t a, g, temp;
  int i,red,green,blue, color;
  mpu.getEvent(&a, &g, &temp);

  /* Print out the values */
  // Serial.print("Acceleration X: ");
  // Serial.print(a.acceleration.x);
  // Serial.print(", Y: ");
  // Serial.print(a.acceleration.y);
  // Serial.print(", Z: ");
  // Serial.print(a.acceleration.z);
  // Serial.println(" m/s^2");

  // Serial.print("Rotation X: ");
  // Serial.print(g.gyro.x);
  // Serial.print(", Y: ");
  // Serial.print(g.gyro.y);
  // Serial.print(", Z: ");
  // Serial.print(g.gyro.z);
  // Serial.println(" rad/s");

  // Serial.print("Temperature: ");
  // Serial.print(temp.temperature);
  // Serial.println(" degC");

  

  // pixels.clear(); // Set all pixel colors to 'off'
  // pixels.show();

  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  red = abs(a.acceleration.x - x0);
  red = red < NUMPIXELS ? red : NUMPIXELS;
  green = abs(a.acceleration.y - y0);
  green = green < NUMPIXELS ? green : NUMPIXELS;
  blue = abs(a.acceleration.z - z0);
  blue = blue < NUMPIXELS ? blue : NUMPIXELS;
 Serial.print("Acceleration X: ");
  Serial.print(red);
  Serial.print(", Y: ");
  Serial.print(green);
  Serial.print(", Z: ");
  Serial.print(blue);
  Serial.println(" m/s^2");

  if (red >= green && red >= blue)
  {
    for (i = 0; i <= red; i++)
    {
      // color = pixels.Color(30,0,0);
      pixels.setPixelColor(i, pixels.Color(30,0,0));
      
    }
    // pixels.show();
    //   delay(DELAYVAL); 
    for (i = red+1; i < NUMPIXELS; i++)
    {
      // color = pixels.Color(30,0,0);
      pixels.setPixelColor(i, pixels.Color(0,0,0));

    }
          pixels.show();
  } 
  else if (blue >= red && blue >= green)
  {
    for (i = 0; i <= blue; i++)
    {
      // color = pixels.Color(0,0,30);  
      pixels.setPixelColor(i, pixels.Color(0,0,30));
      // pixels.show();
      // delay(DELAYVAL); 
    }
    for (i = blue+1; i < NUMPIXELS; i++)
    {
      // color = pixels.Color(30,0,0);
      pixels.setPixelColor(i, pixels.Color(0,0,0));

    }
          pixels.show();
  }
  else //   if (green >= red && green >= blue)      
  {
    for (i = 0; i <= green; i++)
    {
      // color = pixels.Color(0,30,0);
      pixels.setPixelColor(i, pixels.Color(0,30,0));
      // pixels.show();
      // delay(DELAYVAL); 
    }
    for (i = green+1; i < NUMPIXELS; i++)
    {
      // color = pixels.Color(30,0,0);
      pixels.setPixelColor(i, pixels.Color(0,0,0));

    }
          pixels.show();
  }
  delay(DELAYVAL); 
  // for (i = 0; i < NUMPIXELS; i++)
  // {
  //   pixels.setPixelColor(i, pixels.Color(30,0,0));
  //   pixels.show();
  //   delay(DELAYVAL*10); 
  // }
  // digitalWrite(4, HIGH);  // turn the LED on (HIGH is the voltage level)
  // delay(1000);                      // wait for a second
  // digitalWrite(4, LOW);   // turn the LED off by making the voltage LOW
  // delay(1000);     
}
