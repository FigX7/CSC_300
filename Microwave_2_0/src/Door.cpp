#include "utils.h"
#include "Door.h"

namespace MicrowaveSystem
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
