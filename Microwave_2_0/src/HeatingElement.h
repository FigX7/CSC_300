/*
 * HeatingElement.h
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */

#ifndef HEATINGELEMENT_H_
#define HEATINGELEMENT_H_
#include "Door.h"


namespace MicrowaveSystem {

	class HeatingElement{

		public:
			HeatingElement();
			~HeatingElement();
			void turnOn();
			void turnOff();

		private:
			Door m_door;
			bool isOn;
	};


}




#endif /* HEATINGELEMENT_H_ */
