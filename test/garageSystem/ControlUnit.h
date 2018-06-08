#pragma once
#include "Motor.h"
#include "WallPanel.h"
#include "Sensor.h"
#include "Door.h"

namespace DoorSystem
{
	class WallPanel;

	class ControlUnit
	{
	public:
		ControlUnit();
		~ControlUnit();
		void powerMotor();

	private:
		Motor m_motor;
		Sensor m_sensor;
		Door m_door;
	};

}
