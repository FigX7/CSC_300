/*
 * ControlUnit.h
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */

#ifndef CONTROLUNIT_H_
#define CONTROLUNIT_H_

#include "HeatingElement.h"
#include "Timer.h"
#include "Door.h"
#include "KeyPad.h"


namespace MicrowaveSystem{
	extern int globalTime;
	extern bool isInteruppted;
	class KeyPad;
	class ControlUnit{

	public:
			ControlUnit();
			ControlUnit(int&);
			~ControlUnit();
			int stopTimer();
			void startTimer();
			void powerHeatingElement();

		private:
			HeatingElement m_heatingElement;
			Door m_door;
			Timer  m_timer;
			int totalTime;

	};





}

#endif /* CONTROLUNIT_H_ */
