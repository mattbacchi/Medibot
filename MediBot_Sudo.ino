#include <LiquidCrystal.h>
//#include <SD.h>
//#include <PinChangeIntConfig.h>
#include <PinChangeInt.h>
#include <eHealth.h>


//pins that are connected to LCD besides +5v and Gnd
LiquidCrystal lcd (22,23,24,25,26,27);

int blueButton = 0; 
int redButton = 0; 

const int butOne=31;
const int butTwo=35;
const int butThree=39;
const int butFour=30;
const int butFive=34;
const int butSix=38;
const int butSeven=29;
const int butEight=33;
const int butNine=37;
const int butAst=28;
const int butPnd=36;
const int butZero=32;

const int blue=52;
const int red=53;

const int redBut=50;
const int blueBut=51;

int cont = 0;

/*Sd2Card card;
SdVolume volume;
SdFile root;
SdFile file;

char name[] = "patients.txt";
*/

void setup() {
  
  
  Serial.begin(115200);
  eHealth.initPulsioximeter();
  //Attach the inttruptions for using the pulsioximeter.
  PCintPort::attachInterrupt(6, readPulsioximeter, RISING);  
  
  pinMode(butZero, INPUT);
  digitalWrite(butZero, HIGH);
  pinMode(butOne, INPUT);
  digitalWrite(butOne, HIGH);
  pinMode(butTwo, INPUT);
  digitalWrite(butTwo, HIGH);
  pinMode(butThree, INPUT);
  digitalWrite(butThree, HIGH);
  pinMode(butFour, INPUT);
  digitalWrite(butFour, HIGH);
  pinMode(butFive, INPUT);
  digitalWrite(butFive, HIGH);
  pinMode(butSix, INPUT);
  digitalWrite(butSix, HIGH);
  pinMode(butSeven, INPUT);
  digitalWrite(butSeven, HIGH);
  pinMode(butEight, INPUT);
  digitalWrite(butEight, HIGH);
  pinMode(butNine, INPUT);
  digitalWrite(butNine, HIGH);
  pinMode(butAst, INPUT);
  digitalWrite(butAst, HIGH);
  pinMode(butPnd, INPUT);
  digitalWrite(butPnd, HIGH);
  
  
  pinMode(blue, INPUT);
  pinMode(red, INPUT);
  
  
pinMode(redBut, OUTPUT);
pinMode(blueBut, OUTPUT);
digitalWrite(blueBut, HIGH);
digitalWrite(redBut, HIGH);
  

  
  //pinMode(10, OUTPUT); //SD Card Pin
  //card.init();
  //volume.init(card);
  //root.openRoot(volume);

  
  //set up the LCD's number of columns and rows
  lcd.begin(20,4);
  //print startup message
  lcd.print("  **  Welcome!  **  ");
  lcd.print("Read the monitor for");
  lcd.print("                    ");
  lcd.print("instructions.       ");
}

  
  void loop(){
    program();   
}


void program() {
  //file.open(root, "patients.txt", O_CREAT | O_APPEND | O_WRITE);
  
  welcome();
  slide2();
  slide3();
  heartRate1();
  heartRate2();
  heartRate3();
  heartRate4();
  bloodPressure1();
  bloodPressure2();
  bloodPressure3();
  bloodPressure4();
  bodyTemp1();
  bodyTemp2();
  bodyTemp3();
  followUp1();
  followUp2();
  question1();
  question2();
  question3();
  question4();
  completion();
  
  
  
  //heartRate4();
  //file.close();
}

void welcome() {
  
  lcd.clear();
  lcd.print("1 **  Welcome!  **  ");
  lcd.print("Read the monitor for");
  lcd.print("                    ");
  lcd.print("instructions.       ");
  delay(100);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
}
  
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  welcome();}
  
  else {
  welcome();
  }
 }


void slide2(){
  lcd.clear();
  lcd.print("2 **  Welcome!  **  ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  program();}

  else{
    slide2();
  }  
}

void slide3(){
  lcd.clear();
  lcd.print("3 **  Welcome!  **  ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  slide2();}

  else{
    slide3();
  }
   
}

void heartRate1() {
  lcd.clear();
  lcd.print("4 Taking Your Heart");
  lcd.print("");
  lcd.print("Rate");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  heartRate2();
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  slide3();
  }
  
  else{
    heartRate1();
  }
}

void heartRate2() {
   lcd.clear();
  lcd.print("5 Insert Your Left  ");
  lcd.print("                    ");
  lcd.print("Pointer Finger");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  heartRate3();
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  heartRate1();
}

  else{
    heartRate2();
  }
}

void heartRate3() {
  lcd.clear();
  lcd.print("6 Getting Your Heart");
  lcd.print("                    ");
  lcd.print("Rate                ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  heartRate4();
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  heartRate2();
}

  else{
    heartRate3();
  }
}

void heartRate4() {
  lcd.clear();
  lcd.print("7 Record Your Heart ");
  lcd.print("                    ");
  lcd.print("Rate                ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  heartRate4();
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  heartRate3();
}

  else{
    heartRate4();
  }
}
  
  
  void bloodPressure1() {
  lcd.clear();
  lcd.print("8 Find the Blood    ");
  lcd.print("                    ");
  lcd.print("Pressure Sensor     ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  bloodPressure2();
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  heartRate4();
}

  else{
    bloodPressure1();
  }
}
  
  void bloodPressure2() {
      lcd.clear();
  lcd.print("9 Putting on the    ");
  lcd.print("                    ");
  lcd.print("Sensor              ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  bloodPressure3();
}
    
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  bloodPressure1();
}

  else{
    bloodPressure2();
  }
}
   
  void bloodPressure3() {
  lcd.clear();
  lcd.print("10 Taking Your Blood");
  lcd.print("                    ");
  lcd.print("Pressure            ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  bloodPressure4();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  bloodPressure1();
}
  else{
    bloodPressure3();
  }
}

  void bloodPressure4() {
  lcd.clear();
  lcd.print("11 Removing the     ");
  lcd.print("                    ");
  lcd.print("Sensor              ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  bodyTemp1();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  bloodPressure3();
}
  else{
    bloodPressure4();
  }
}
  
  void bodyTemp1() {
  lcd.clear();
  lcd.print("12 Locating the Body");
  lcd.print("                    ");
  lcd.print("Temperature Sensor  ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  bodyTemp2();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  bloodPressure4();
}
  else{
    bodyTemp1();
  }
}
  
 void bodyTemp2() {
  lcd.clear();
  lcd.print("13 Taking your Body ");
  lcd.print("                    ");
  lcd.print("Temperature         ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  bodyTemp3();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  bodyTemp1();
}
  else{
    bodyTemp2();
  }
}
  
  
  void bodyTemp3() {
  lcd.clear();
  lcd.print("14 Waiting For the  ");
  lcd.print("                    ");
  lcd.print("Timer               ");
  delay(400);
  
  wait60();
  
  float temperature = eHealth.getTemperature();
  float degF=((temperature*(1.8)) +32);
  lcd.print(eHealth.getTemperature());
  delay(5000);
  
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  followUp1();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  bodyTemp2();
}
  else{
    followUp1();
    //bodyTemp3();
  }
}
  
    
  void followUp1() {
  lcd.clear();
  lcd.print("15 Wrap Up Questions");
  lcd.print("                    ");
  lcd.print("                    ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  followUp2();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  bodyTemp3();
}
  else{
    followUp1();
  }
}
  
  void followUp2() {
  lcd.clear();
  lcd.print("16 Wrap Up Questions");
  lcd.print("                    ");
  lcd.print("                    ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  question1();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  followUp1();
}
  else{
    followUp2();
  }
}
  
  void question1() {
        lcd.clear();
  lcd.print("17 What Is Your     ");
  lcd.print("                    ");
  lcd.print("Gender?             ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  question2();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  followUp2();
}
  else{
    question1();
  }
}
  
  void question2() {
  lcd.clear();
  lcd.print("18 What Is Your Age?");
  lcd.print("                    ");
  lcd.print("                    ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  question3();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  question1();
}
  else{
    question2();
  }
}
  
  void question3() {
  lcd.clear();
  lcd.print("19 Recent Illnesses?");
  lcd.print("                    ");
  lcd.print("                    ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  question4();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  question2();
}
  else{
    question3();
  }
}
  
  void question4() {
  lcd.clear();
  lcd.print("20 Recent Activites?");
  lcd.print("                    ");
  lcd.print("                    ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  completion();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  question3();
}
  else{
    question4();
  }
}
  
  
  
  void completion() {
  lcd.clear();
  lcd.print("21 You're Finished! ");
  lcd.print("Thank You For Your  ");
  lcd.print("                    ");
  lcd.print("Participation       ");
  delay(400);
  
 blueButton = digitalRead(blue);
 redButton = digitalRead(red);
  
  if (blueButton==HIGH){
  digitalWrite(redBut, LOW);
  delay(250);
  digitalWrite(redBut, HIGH);
  program();
}
  else if (redButton==HIGH)  {
  digitalWrite(blueBut, LOW);
  delay(250);
  digitalWrite(blueBut, HIGH);
  question4();
}
  else{
    completion();
  }
}



void readPulsioximeter(){    
  cont ++; 
    if (cont == 50) { //Get only one 50 measures to reduce the latency
      eHealth.readPulsioximeter();  
     cont = 0;
   	}
}

void lcdWait() {
  lcd.clear();
  lcd.print("Please wait 10      ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 9       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 8       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 7       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 6       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 5       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 4       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 3       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 2       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 1       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 0       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  lcd.clear();
  delay(1000);
}





void wait60() {  
  lcd.clear();
  lcd.print("Please wait 60      ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 59       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 58       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 57       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 56       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 55       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 54       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 53       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 52       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 51       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 50       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  lcd.clear();
  delay(1000);
  
  lcd.clear();
  lcd.print("Please wait 49      ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 48       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 47       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 46       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 45       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 44       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 43       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 42       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 41       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 40       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  lcd.clear();
  delay(1000);
  
  lcd.clear();
  lcd.print("Please wait 39       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 38       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 37       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 36       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 35       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 34       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 33       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 32       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 31       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 30       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  lcd.clear();
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 29       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 28       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 27       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 26       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 25       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 24       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 23       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 22       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 21       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 20       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  lcd.clear();
  delay(1000);
  
  lcd.clear();
  lcd.print("Please wait 19      ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 18       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 17       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 16       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 15       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 14       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 13       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 12       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 11       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 10       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  lcd.clear();
  delay(1000);
  
  lcd.clear();
  lcd.print("Please wait 9       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 8       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 7       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 6       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 5       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 4       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 3       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 2       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 1       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  delay(1000);
  lcd.clear();
  lcd.print("Please wait 0       ");
  lcd.print("                    ");
  lcd.print("seconds             ");
  lcd.clear();
  delay(1000);
}
