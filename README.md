# potatOS
potatOS the simple to deploy arduino controled greenhouse control

Controls for the PLC:
	Lift walls: run a motor untill a limit switch is depressed, the depression of a limit switch will signal that the walls of the greenhouse have lifted, if there is no limit switch pressed tune a time out and return an error over serial stating that the controler is unsure of the condition of the greenhouse walls: this situation will trigger when the INTERNAL_TEMPATURE sensor is above X and will stop triggering if the INTERNAL_TEMPATURE sensor is below X
	Vent: toggle the condition of a relay that will control the ventalation walls, this vent system will only trigger when the Lift walls are in the closed condition and will never operate when the water is on
	Water: toggle a solenoid that will control the flow of water to water the plants, take readings from INTERNAL_HUMIDITY to adjust how much water is needed, a soil probe will determine the water content of the soil and will not water execcivly, if the probe returns unusual values it will return a error and will not produce water untill the situation is repaired
