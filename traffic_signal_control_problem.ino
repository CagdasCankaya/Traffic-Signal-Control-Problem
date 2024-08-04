// C++ code
//
int redLed = 13;
int yellowLed = 11;
int greenLed = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
}

void loop()
{
  redLight();
}

void redLight(){
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(redLed,HIGH);
  delay(5000);
  char red[] ="red";
  yellowLight(red);
  //char isRed = 'R';
  //yellowLight(isRed);
}

void yellowLight(char * whichLed){  //void yellowLight(char whichLed)
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,HIGH);
  delay(2000);
  Serial.println(whichLed);
  
  if(strcmp(whichLed,"red") == 0){  //if(whichLed =='R')
    digitalWrite(redLed,LOW);
  }
  	
  else if(strcmp(whichLed,"green")==0){ //else if(whichLed == 'G')
    digitalWrite(greenLed,LOW);
    redLight();
  }
    
  greenLight();
  Serial.println(whichLed);
}


void greenLight(){
  digitalWrite(greenLed,HIGH);
  digitalWrite(yellowLed,LOW);
  delay(5000);
  char green[] = "green";
  yellowLight(green);
  //char isGreen = 'G';
  //yellowLight(isGreen);
  
}

