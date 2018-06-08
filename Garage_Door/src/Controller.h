/*
 * Controller.h
 *
 *  Created on: May 20, 2018
 *      Author: Micha
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include "Signal.h"


class Controller: public Signal{
	private:
		bool signal = false;

	public:
		Controller();
		~Controller();
		bool sendSignal(bool& signal);
		virtual bool getSignal();
		virtual void setSignal(bool&);
		virtual bool sendSignal();
};



#endif /* CONTROLLER_H_ */
