//Needs to send signals to arduino micro vie digital pings 3-7 to tell it which lights to turn on and off
//needs to recieve bluetooth data from the joystick and the app
//needs to use that data to steer and change velocity.
int y_value;
int x_value;
bool c_button;
bool z_button;
int accel_x;
int accel_y;
int accel_z;
bool headLightsOn;
bool brakeLightsOn;
bool leftLightsOn;
bool rightLightsOn;
bool hazardsOn;

void Setup()	{
	
}

void Loop()	{
  checkLights();
}

void checkLights()	{
	checkHazards();
	checkRightLights();
	checkLeftLights();
	checkBrakeLights();
	checkHeadLights();
}

void checkHeadLights()	{
	if(!headLightsOn	&&	digitalRead())	{
		digitalWrite(,HIGH);
	}
	else if(headLightsdOn && !digitalRead())	{
		digitalWrite(,LOW);
	}
}

void checkHazards()	{
	if(!hazardsOn	&&	digitalRead())	{
		digitalWrite(,HIGH);
	}
	else if(hazardsOn && !digitalRead())	{
		digitalWrite(,LOW);
	}
}

void checkRightLights()	{
	if(!rightLightsOn	&&	digitalRead())	{
		digitalWrite(,HIGH);
	}
	else if(rightLightsOn && !digitalRead())	{
		digitalWrite(,LOW);
	}
}

void checkLeftLights()	{
	if(!leftLightsOn	&&	digitalRead())	{
		digitalWrite(,HIGH);
	}
	else if(leftLightsOn && !digitalRead())	{
		digitalWrite(,LOW);
	}
}

void checkBrakeLights()	{
	if(!brakeLightsOn	&&	digitalRead())	{
		digitalWrite(,HIGH);
	}
	else if(brakeLightsdOn && !digitalRead())	{
		digitalWrite(,LOW);
	}
}
