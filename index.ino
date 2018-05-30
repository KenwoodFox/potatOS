void index()
{
  delay(10);
  newData = false; //Set the data in the index char to be overwrittin
  delay(100);
  Serial.print("Received Command: ");
  Serial.println(imput);

  //commands
  //operation a
  if (imput == 'a')
  {
    Serial.println("doing a");
    operation_a();
    
    if (a == true)
    {
      Serial.println("Operation complete");
    }
    else
    {
      Serial.println("Operation not completed!");
    }
  }

  //operation b
  if (imput == 'b')
  {
    Serial.println("doing b");
    operation_b();
    
    if (b == true)
    {
      Serial.println("Operation complete");
    }
    else
    {
      Serial.println("Operation not completed!");
    }
  }

  //End Index
    if ((imput == 'a') || (imput == 'b')) 
    { //Secondary index to display the error message below
      delay(2);
    }
    else
    {
      Serial.println("That is not a command or it has not been added to my index yet.");
    }
}

