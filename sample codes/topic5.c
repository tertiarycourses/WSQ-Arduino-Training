# Activity: DHT

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup(){

  Serial.begin(9600);
}

void loop(){
  Serial.print("Temperature = ");
  Serial.println(dht.readTemperature());
  Serial.print("Humidity = ");
  Serial.println(dht.readHumidity());
  delay(1000);
}


# Activity: DC Motor Control

void setup()
{
 pinMode(6,OUTPUT);
}

void loop()
{
 analogWrite(6,255); //same with HIGH
 delay(1000);
 analogWrite(6,123);
 delay(1000);
 analogWrite(6,50);
 delay(1000);
 analogWrite(6, LOW);//same with 0
 delay(1000);
}


# Activity: Controlling DC Motor Fan with DHT

void setup()
{
 pinMode(6,OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  Serial.print("Temperature = ");
  Serial.println(dht.readTemperature());
  Serial.print("Humidity = ");
  Serial.println(dht.readHumidity());
  delay(1000);


 analogWrite(6,255); //same with HIGH
 delay(1000);
 analogWrite(6,123);
 delay(1000);
 analogWrite(6,50);
 delay(1000);
 analogWrite(6, LOW);//same with 0
 delay(1000);
}