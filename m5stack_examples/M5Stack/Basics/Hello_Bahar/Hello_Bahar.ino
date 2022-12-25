/*
*******************************************************************************
* Writer: Bahar Kaviani
* Describe: Hello Bahar
* Date: 2022/12/24
*******************************************************************************
*/
#include <M5Stack.h>

/* After M5Core is started or reset
the program in the setUp () function will be run, and this part will only be run once. */
void setup() {
    // Init M5Core
    M5.begin();

    // Init Power module.
    M5.Power.begin();

    /* Power chip connected to gpio21, gpio22, I2C device
      Set battery charging voltage and current
      If used battery, please call this function in your project */
    M5.Lcd.print("Hello Bahar");  // Print text on the screen (string)
}

/* After the program in setup() runs, it runs the program in loop()
The loop() function is an infinite loop in which the program runs repeatedly */
void loop() {

}