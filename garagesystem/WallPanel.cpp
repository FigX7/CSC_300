#include "WallPanel.h"
#include "ControlUnit.h"

namespace DoorSystem
{

	WallPanel::WallPanel()
	{
		m_controlunit = new ControlUnit;
	}


	WallPanel::~WallPanel()
	{
	}

	void
	WallPanel::pressButton()
	{
		cout << " --> WallPanel::pressButton" << endl;
		
		/* send message to ControlUnit */
		m_controlunit->powerMotor();

		cout << " WallPanel::pressButton -->" << endl;
		
	}
}