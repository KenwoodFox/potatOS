void index()
{
  delay(10);
  newData = false; //Set the data in the index char to be overwrittin
  delay(100);
  Serial.print("Received Command: ");
  Serial.println(imput);

  //commands
  //operation a
  if (imput == 'lift')
  {
    Serial.println("exc operation lift");
    operation_lift(0);
    
    if (LIFTCOMPLETE == true)
    {
      Serial.println("Operation complete");
    }
    else
    {
      Serial.println("Operation not completed!");
    }
    LIFTCOMPLETE = false;
  }

  //operation b
  if (imput == 'vent')
  {
    Serial.println("exc operation vent");
    operation_vent(0); //replace with option
    
    if (VENTCOMPLETE == true)
    {
      Serial.println("Operation complete");
    }
    else
    {
      Serial.println("Operation not completed!");
    }
    VENTCOMPLETE = false;
  }

  //End Index
    if ((imput == 'lift') || (imput == 'vent') || (imput == 'water')) 
    { //Secondary index to display the error message below
      delay(2);
    }
    else
    {
      Serial.println("That is not a command or it has not been added to my index yet.");
    }
    imput = "";
}
