#include "utils.h"
#include "Door.h"

namespace DoorSystem
{

	Door::Door()
	{
	}


	Door::~Door()
	{
	}

	bool
	Door::open()
	{
		cout << " --> Door::open " << endl;

		bool retState = false;
		if (m_state == CLOSED)
		{
			cout << "DOOR opening" << endl;
			m_state = IS_OPENING;
			Sleep(2500);
			m_state = OPEN;
			retState = true;
		}
		else
		{
			cout << " Door::open Unimplemented UseCase part" 
				<< endl;
			retState = false;
		}

		cout << " Door::open --> " << endl;
		return retState;
	}

}
