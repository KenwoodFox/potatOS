void operation_vent(int VENTSTATE)
{
  if(VENTSTATE = 1)
  {
    //on relay
    Serial.print("turning on the vents");
  }
  else
  {
    Serial.print("Turning off the vents");
    //off relay
  }
  VENTCOMPLETE = true;
}
