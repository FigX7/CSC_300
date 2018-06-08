#pragma once
#include "utils.h"

namespace DoorSystem
{
	typedef enum
	{
		CLOSED,
		OPEN,
		IS_CLOSING,
		IS_OPENING,
		DOOR_ERROR

	} DOOR_STATE;

	class Door
	{
	public:
		Door();
		~Door();
		bool open();
	private:
		DOOR_STATE m_state = CLOSED;
	};

}

