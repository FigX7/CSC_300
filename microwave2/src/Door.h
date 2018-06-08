#pragma once
#include "utils.h"

namespace MicrowaveSystem{

	typedef enum
	{
		CLOSED,
		OPEN,
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

