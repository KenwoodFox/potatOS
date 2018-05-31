void operation_lift(int LIFTSTATE)
{
  if(LIFTSTATE == 1)
  {
    //go up
    //toggle pin forward
    while(LIFTLIMIT != true && LIFTTIMEOUT < 20)
    {
    delay(LIFTREAD);
    LIFTTIMEOUT + (LIFTREAD / 1000);
    }
  //stop motor
  }
  else
  {
    //go down
    //toggle pin down
     while(LIFTLIMIT != true && LIFTTIMEOUT < 20)
     {
    delay(LIFTREAD);
    LIFTTIMEOUT + (LIFTREAD / 1000);
    }
  }

  if(LIFTTIMEOUT > 20)
  {
    Serial.println(0x1B);
    //ansi.setForegroundColor(RED);
    Serial.println("Warning!! The PLC did not receive conformation that the walls have lifted to the correct height or at all! the PLC will continue to operate but check that the system is intact as damage is possible!");
    //ansi.setForegroundColor(WHITE);
  }
  LIFTTIMEOUT = 0;
}

