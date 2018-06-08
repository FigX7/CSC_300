/*
 * Timer.h
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "utils.h"
#include "KeyPad.h"
#include <thread>
#include <mutex>
#include <condition_variable>
#include <functional>

namespace MicrowaveSystem{
	class ControlUnit;
	class Timer{
		public:
			Timer();
			~Timer();
			Timer(int&);
			void startTime();
			void stopTime();
			bool hasTime();
			void Start();
			void Pause();
			void Resume();

		private:

			int totalTime = 0;
			int timerMins = 0;
			int timerSecs = 0;


			HeatingElement m_heatingElements;
			ControlUnit* m_controlunit = nullptr;



	};

}


#endif /* TIMER_H_ */
