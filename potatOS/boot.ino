void boot()
{
  Serial.println("If you did not trigger a reboot, this could be caused by an overdraw,");
  delay(2000);
  Serial.print("Starting potatOS by joe:");
  while(i > 20)
  {
    Serial.print("=");
    i++;
  }
  Serial.println("Finished loading.");
}

