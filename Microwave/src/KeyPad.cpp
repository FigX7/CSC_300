/*
 * Keypad.cpp
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */

#include "ControlUnit.h"
#include "KeyPad.h"


namespace MicrowaveSystem{


	KeyPad::KeyPad(){
		this->setTime();

	}

	KeyPad::~KeyPad(){}




	void
	KeyPad::setTime(){
		this->timeSecs = 5;
		this->timeMins = 0;
		this->totalTime = this->timeSecs + (this->timeMins * 60);

	}

	void
	KeyPad::pressStart(){
		m_controlUnit = new ControlUnit(this->totalTime);
		m_controlUnit->startTimer();


	}

	int
	KeyPad::pressStop(){
		stopButton = true;
		return m_controlUnit->stopTimer();
	}


}
