const int MOTOR_1A = 2;
const int MOTOR_1B = 3;
const int MOTOR_2A = 4;
const int MOTOR_2B = 5;
const int SENSOR1 = 10;
const int SENSOR2 = 12;
const int MAJU;

void setup()
{
pinMode (MOTOR_1A, OUTPUT);
pinMode (MOTOR_1B, OUTPUT);
pinMode (MOTOR_2A, OUTPUT);
pinMode (MOTOR_2B, OUTPUT);
pinMode (SENSOR1, INPUT);
pinMode (SENSOR2, INPUT);
}

void loop()
{
  //Untuk mendeteksi 1 dan 0 pada sensor garis

// deteksi sensor maju 
  if((digitalRead (SENSOR1)==0)&&
    (digitalRead (SENSOR2)==0));

// deteksi belok kanan
  if((digitalRead (SENSOR1)==0)&&
    (digitalRead (SENSOR2)==1));

 // deteksi belok kiri
  if((digitalRead (SENSOR1)==1)&&
    (digitalRead (SENSOR2)==0));

 // deteksi untuk stop
  if((digitalRead (SENSOR1)==1)&&
    (digitalRead (SENSOR2)==1));


//---------
// MAJU
{
  analogWrite(MOTOR_1A,200);
  analogWrite(MOTOR_1B,0);
  analogWrite(MOTOR_2A,200);
  analogWrite(MOTOR_2B,0);
}
//---------

//BELOK KANAN
{
  analogWrite(MOTOR_1A,200);
  analogWrite(MOTOR_1B,0);
  analogWrite(MOTOR_2A,0);
  analogWrite(MOTOR_2B,0);
}
//---------

// BELOK KIRI
{
  analogWrite(MOTOR_1A,0);
  analogWrite(MOTOR_1B,0);
  analogWrite(MOTOR_2A,200);
  analogWrite(MOTOR_2B,0);
}
//---------

//MAJU
{
  analogWrite(MOTOR_1A,0);
  analogWrite(MOTOR_1B,0);
  analogWrite(MOTOR_2A,0);
  analogWrite(MOTOR_2B,0);
}
}