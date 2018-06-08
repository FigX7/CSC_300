/*
 * Keypad.h
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "utils.h"

namespace MicrowaveSystem{

	class ControlUnit;
	class KeyPad{
		public:
			KeyPad();
			~KeyPad();

			void setTime();
			void pressStart();
			int pressStop();


		private:
			bool stopButton =  false;
			int timeSecs = 0;
			int timeMins = 0;
			int totalTime = 0;
			ControlUnit* m_controlUnit = nullptr;
	};

}



#endif /* KEYPAD_H_ */
