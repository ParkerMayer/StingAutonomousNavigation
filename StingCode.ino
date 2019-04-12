int leftPinOne = 2;
int leftPinTwo = 3;

int rightPinOne = 11;
int rightPinTwo = 12;

int BUTTON = 7;
//int LED = 13;

bool robotReady = false;

void setup(){
  
  pinMode(leftPinOne, OUTPUT);
  pinMode(leftPinTwo, OUTPUT);
  pinMode(rightPinOne, OUTPUT);
  pinMode(rightPinTwo, OUTPUT);

  pinMode(BUTTON, INPUT_PULLUP);
  //pinMode(LED, OUTPUT);
  
  //digitalWrite(LED, LOW);

}

void loop(){

  if(digitalRead(BUTTON) == LOW){
    robotReady = true;
  }
  
  if(robotReady){
    
    delay(1000);
    
    analogWrite(leftPinTwo, 100);
    analogWrite(rightPinOne, 100);
    delay(1000);
    analogWrite(leftPinTwo, 0);
    analogWrite(rightPinOne, 0);

    
    robotReady = false;
  }
}
