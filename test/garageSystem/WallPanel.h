#pragma once
#include "utils.h"

namespace DoorSystem
{
	class ControlUnit;

	class WallPanel
	{
	public:
		WallPanel();
		~WallPanel();
		void pressButton();
	private:
		ControlUnit* m_controlunit = nullptr;
	};

}
