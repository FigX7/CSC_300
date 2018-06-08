/*
 * Controller.cpp
 *
 *  Created on: May 20, 2018
 *      Author: Micha
 */

#include "Controller.h"


Controller::Controller(){};

Controller::~Controller(){};

bool
Controller:: getSignal(){
	return this-> signal;
}

void
Controller:: setSignal(bool& set_signal){
	this->signal = set_signal;
}

