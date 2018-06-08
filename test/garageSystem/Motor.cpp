#include "utils.h"
#include "Motor.h"

namespace DoorSystem
{


	Motor::Motor()
	{
	}


	Motor::~Motor()
	{
	}

	bool
	Motor::raiseDoor()
	{
		cout << " --> Motor::raiseDoor " << endl;
		
		bool ret = m_door.open();
	
		cout << " Motor::raiseDoor --> " << endl;

		return ret;
	}

}