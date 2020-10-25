
# Activity: LED Blinking

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

# Activity: Push Button

int LED = 4;
int Button = 2;
void setup()
{
pinMode(4, OUTPUT);
pinMode(2, INPUT_PULLUP);
}

void loop()
{
 if (digitalRead(Button) == LOW)
 digitalWrite(LED, HIGH);
 else if (digitalRead(Button) == HIGH)
 digitalWrite(LED, LOW);
}


# Activity: Fade an LED

int LED = 3;
int brightness = 0;
int fadeAmount = 5;
void setup()
{
pinMode(3, OUTPUT);
}
void loop()
{
 analogWrite(LED, brightness);
 brightness = brightness + fadeAmount;
 if (brightness <= 0 || brightness >= 255)
 {
 fadeAmount = -fadeAmount;
 }
 delay(30);
}

