#pragma once
#include "Door.h"

namespace DoorSystem
{

	class Motor
	{
	public:
		Motor();
		~Motor();
		bool raiseDoor();
	private:
		Door m_door;
	};

}

