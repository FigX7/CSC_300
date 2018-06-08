#include <iostream>
#include "WallPanel.h"




int main(int argc, char* argv[])
{
	using namespace DoorSystem;


	WallPanel panel;
	try
	{
		panel.pressButton();
	}
	catch ( const DoorSystemException& exc )
	{
		cout << "Door operation failed: " 
			 << exc.reason()
			 << endl;
	}

    return 0;
}

