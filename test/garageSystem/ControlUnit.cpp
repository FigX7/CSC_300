#include "ControlUnit.h"

namespace DoorSystem
{


	ControlUnit::ControlUnit()
	{
	}


	ControlUnit::~ControlUnit()
	{
	}

	void 
	ControlUnit::powerMotor()
	{
		cout << " --> ControlUnit::powerMotor " << endl;
		
		bool result = m_motor.raiseDoor();

		if(result)
			cout << " ControlUnit::powerMotor sucessful " << endl;
		else
			cout << " ControlUnit::powerMotor unsucessful " << endl;

		cout << " ControlUnit::powerMotor --> " << endl;
	}

}
