void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    imput += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      newData = true;
    }
  }
}

//void readFromSerial()
//{
//  if (Serial.available() > 0) { //If a new command comes in, convert it into the imput variable and index it before overwriting it
//    imput = Serial.read();
//    newData = true;
//  }
//}

