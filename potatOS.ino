
boolean a = false;
boolean b = false;

int i = 0; //generic integer to run while loops
boolean newData = false; //becomes true only as long as there is unindexed information
char imput; //populated with the current command not yet run



void setup() {
  Serial.begin(57600); //start serial port
  delay(10);
  boot();

}

void loop() {
  readFromSerial(); //read a command from serial when available
  if(newData == true)
  {
    index();
  }
}
