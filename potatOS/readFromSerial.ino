void readFromSerial()
{
  if (Serial.available() > 0) { //If a new command comes in, convert it into the imput variable and index it before overwriting it
    imput = Serial.read();
    newData = true;
  }
}

