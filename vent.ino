void operation_vent(int VENTSTATE)
{
  if(VENTSTATE = 1)
  {
    //on relay
    Serial.println("turning on the vents");
  }
  else
  {
    Serial.println("Turning off the vents");
    //off relay
  }
  VENTCOMPLETE = true;
}
