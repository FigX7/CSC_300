/*
 * ControlUnit.cpp
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */


#include "ControlUnit.h"

namespace MicrowaveSystem{

	int globalTime = 0;
	bool isInteruppted = false;
	ControlUnit::ControlUnit(){

	}

	ControlUnit::ControlUnit(int& r_totalTime){
		this->totalTime = r_totalTime;
		m_timer = Timer(totalTime);
	}


	ControlUnit::~ControlUnit(){

	}

	void
	ControlUnit::startTimer(){
		m_timer.startTime();

	}

	int
		ControlUnit::stopTimer(){
			return m_timer.stopTime();

	}

	void
	ControlUnit::powerHeatingElement(){


	}

}
