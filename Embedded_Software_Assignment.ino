#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int lightPin = A5;
const int ledPin = A0;

int lightSensorValue = 0;

void setup()
{
 lcd.begin (16,2);
 Serial.begin(9600);
 pinMode (ledPin, OUTPUT);
 pinMode (lightPin, INPUT);
}

void loop()
{
 lightSensorValue = analogRead (lightPin);
 Serial.print("light:");
 Serial.println( lightSensorValue);
  if(lightSensorValue >80)
   {
     digitalWrite (ledPin, LOW) ;
     lcd.setCursor(0,0);
     lcd.print("Not enough light");
  }
  else
    {
     digitalWrite (ledPin, HIGH);
     lcd.setCursor(0,0);
     lcd.print("Enough light");
    }
 
 }

 
