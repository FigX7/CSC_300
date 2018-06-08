/*
 * Siganl.h
 *
 *  Created on: May 20, 2018
 *      Author: Micha
 */

#ifndef SIGNAL_H_
#define SIGNAL_H_

class Signal{
	private:
		bool signal = false;
	public:
		virtual bool getSignal() = 0;
		virtual void setSignal() = 0;
		virtual bool sendSignal() = 0;
};


#endif /* SIGNAL_H_ */
