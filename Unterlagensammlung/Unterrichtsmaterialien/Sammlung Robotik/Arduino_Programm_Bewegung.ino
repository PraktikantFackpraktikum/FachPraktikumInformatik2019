// connect motor controller pins to Arduino digital pins
// motor one
int enA = 9;
int in1 = 4;
int in2 = 5;
// motor two
int enB = 10;
int in3 = 6;
int in4 = 7;
void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}
void LeftTurn(int i)
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 155);
  delay(i);
  analogWrite(enA, 0);
}

void RightTurn(int i)
{
  digitalWrite(in3, LOW); //in 3
  digitalWrite(in4, HIGH);
  analogWrite(enB, 155);
  delay(i);
  analogWrite(enB, 0);
}

void DriveForward(int i)
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 155);
  analogWrite(enB, 155);
  delay(i);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}

void loop()
{  
  
  RightTurn(800);
  DriveForward(1000);
  
  
}
