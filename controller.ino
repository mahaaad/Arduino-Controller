const int SW_pin = 12;
const int X_pin = 0;
const int Y_pin = 1;

int right = 5;
int left = 11;
int down = 4;
int up = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(left,INPUT);
  pinMode(right,INPUT);
  pinMode(down,INPUT);
  pinMode(up,INPUT);
  pinMode(SW_pin,INPUT);
  digitalWrite(SW_pin,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttons();
  joystick();
}

void buttons()
{ 
  if(digitalRead(left) == HIGH)
  {
    Serial.print("z");
    delay(500);
  }
  if(digitalRead(right) == HIGH)
  {
    Serial.print("x");
    delay(500);
  }
  if(digitalRead(down) == HIGH)
  {
    Serial.print("c");
    delay(500);
  }
  if(digitalRead(up) == HIGH)
  {
    Serial.print("v");
    delay(500);
  }


}
void joystick()
{
  if(digitalRead(SW_pin) == LOW)
  {
    Serial.print("b");
    delay(50);
  }

  
  if(analogRead(Y_pin)<400)
  {
    Serial.print("w");
    delay(50);
  }
  else if(analogRead(Y_pin)>600)
  {
    Serial.print("s");
    delay(50);
  }

  if(analogRead(X_pin)>600)
  {
    Serial.print("d");
    delay(50);
  }
  else if(analogRead(X_pin)<400)
  {
    Serial.print("a");
    delay(50);
  }
}
