// ESP32 Input Only Pins :- 34, 35, 36, 39 
int inputPin = 34;

// ESP32 Digital Input Output Pins :- (13-33)
int Button_1 = 23;
int Button_2 = 22;
int Button_3 = 21;
int Button_4 = 19;
int Button_5 = 18;
int Button_6 = 4;
int Button_7 = 5;
int Button_8 = 15;
int Button_9 = 13;
int Button_10 = 12;
int Button_11 = 14;
int Button_12 = 27;


// Define the variables
float A_read = 50;
float A_read_max = 4950 ;
float A_read_min = 0;
float Vin = 0;
float Vin_max = 12;
float Vin_min = -12;

void setup() {
  // Intilize the Serial
  Serial.begin(9600);
  
  // declare the Output pins:
  pinMode(Button_1, OUTPUT);
  pinMode(Button_2, OUTPUT);
  pinMode(Button_3, OUTPUT);
  pinMode(Button_4, OUTPUT);
  pinMode(Button_5, OUTPUT);
  pinMode(Button_6, OUTPUT);
  pinMode(Button_7, OUTPUT);
  pinMode(Button_8, OUTPUT);
  pinMode(Button_9, OUTPUT);
  pinMode(Button_10, OUTPUT);
  pinMode(Button_11, OUTPUT);
  pinMode(Button_12, OUTPUT);
  
}

void loop() {
  // read the value from the sensor:
  A_read = analogRead(inputPin);
  // Mapping between Analog read value to original value
   Serial.println(analogRead (34)); //remove later
  // Should be calibrated by changing the vlaue of the variables
  Vin = ((Vin_max-Vin_min)/(A_read_max-A_read_min)*(A_read-A_read_min)) + Vin_min;

  if (Vin >= -12.0 and Vin < -10.00){
    digitalWrite(Button_1,HIGH);
    delay(1);
    button_off();
  }
  else if (Vin >= -10.00 and Vin < -8.00){
    digitalWrite(Button_2,HIGH);
    delay(1);
    button_off();
  }
  else if (Vin >= -8.00 and Vin < -6.00){
    digitalWrite(Button_3,HIGH);
    delay(1);
    button_off();
  }
  else if (Vin >= -6.00 and Vin < -4.00){
    digitalWrite(Button_4,HIGH);
    delay(1);
    button_off();
  }
    else if (Vin >= -4.00 and Vin < -2.00){
    digitalWrite(Button_5,HIGH);
    delay(1);
    button_off();
  }
    else if (Vin >= -2.00 and Vin < 0.10){
    digitalWrite(Button_6,HIGH);
    delay(1);
    button_off();
  }
    else if (Vin >= 0.10 and Vin < 2.00){
    digitalWrite(Button_7,HIGH);
    delay(1);
    button_off();
  }
    else if (Vin >= 2.00 and Vin < 4.00){
    digitalWrite(Button_8,HIGH);
    delay(1);
    button_off();
  }
    else if (Vin >= 4.00 and Vin < 6.00){
    digitalWrite(Button_9,HIGH);
    delay(1);
    button_off();
  }
    else if (Vin >= 6.00 and Vin < 8.00){
    digitalWrite(Button_10,HIGH);
    delay(1);
    button_off();
  }
  else if (Vin >= 8.00 and Vin < 10.00){
    digitalWrite(Button_11,HIGH);
    delay(1);
    button_off();
  }
    else if (Vin >= 10.00 and Vin < 12.00){
    digitalWrite(12,HIGH);
    delay(1);
    button_off();
  }

  delay(1);
}

// Turn off all buttons
void button_off(){
    digitalWrite(Button_1,LOW);
    digitalWrite(Button_2,LOW);
    digitalWrite(Button_3,LOW);
    digitalWrite(Button_4,LOW);
    digitalWrite(Button_5,LOW);
    digitalWrite(Button_6,LOW);
    digitalWrite(Button_7,LOW);
    digitalWrite(Button_8,LOW);
    digitalWrite(Button_9,LOW);
    digitalWrite(Button_10,LOW);
    digitalWrite(Button_11,LOW);
    digitalWrite(Button_12,LOW);
}
