/*
 * HeatingElement.cpp
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */

#include "utils.h"
#include "HeatingElement.h"

namespace MicrowaveSystem{

	HeatingElement::HeatingElement(){

	}

	HeatingElement::~HeatingElement(){

	}


	void
	HeatingElement::turnOn(){
		cout << "Heating Food: Microwave On"  << endl;
		isOn = true;


	}

	void
	HeatingElement::turnOff(){
		cout << "Heating Food Done: Microwave Off"  << endl;
		isOn = false;

	}



}

