
# Actvity: Digital Write

void setup()
{ // put your setup code here, to run once:
 pinMode(7, OUTPUT);
}
void loop()
{ // put your main code here, to run repeatedly:
 digitalWrite(7, HIGH);
}


# Actvity: Blink LED
void setup()
{
 pinMode(7, OUTPUT);
}
void loop()
{
 digitalWrite(7, HIGH);
 delay(1000);
 digitalWrite(7, LOW);
 delay(1000);
}


# Actvity: Serial Communication

void setup() 
{
  for (int i=2; i<14; i++)
      {
        pinMode(i, OUTPUT);
      }
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Input 1 to Turn LED on and 2 to off");
}

void loop()
{
  if (Serial.available())
  {
    int state = Serial.parseInt();
    if (state == 1)
    {
      for (int j=2; j<14; j++)
      {
        digitalWrite(j, HIGH);
      }
      Serial.println("Command completed LED turned ON");
    }
    if (state == 2)
    {
      for (int k=2; k<14; k++)
      {
        digitalWrite(k, LOW);
      }
      Serial.println("Command completed LED turned OFF");
    }  
  }






