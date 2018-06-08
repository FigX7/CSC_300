/*
 * ControlUnit.cpp
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */


#include "ControlUnit.h"

namespace MicrowaveSystem{
	int timeLeft = 0;
	int globalTime = 0;
	bool isPaused = false;
	ControlUnit::ControlUnit(){

	}

	ControlUnit::ControlUnit(int& r_totalTime){
		this->totalTime = r_totalTime;
		m_timer = Timer(this->totalTime);
	}


	ControlUnit::~ControlUnit(){

	}

	void
	ControlUnit::startTimer(){
		m_timer.Start();

	}

	void
		ControlUnit::stopTimer(){
			return m_timer.stopTime();

	}

	void
	ControlUnit::powerHeatingElement(){


	}

}
