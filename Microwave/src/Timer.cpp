/*
 * Timer.cpp
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */
#include "utils.h"
#include "Timer.h"
#include "ControlUnit.h"
#include <thread>
#include <mutex>
#include <condition_variable>


namespace MicrowaveSystem{


	Timer::Timer(){

	}
	Timer::Timer(int& r_totalTime){
		this->totalTime = r_totalTime;
		MicrowaveSystem::globalTime = this->totalTime;
	}

	Timer::~Timer(){

	}

	bool
	Timer::hasTime(){
		bool result = false;

		if (this->totalTime >= 0){
			result = true;
		}
		return result;
	}

	// Timer Fuinctions ///



	bool
	Timer::checkIsInteruppted(){
		return MicrowaveSystem::isInteruppted;
	}

	int
	Timer::stopTime(){
		MicrowaveSystem::isInteruppted = true;
		return MicrowaveSystem::globalTime;
	}


	void
	Timer::startTime(){
		std::mutex mtx;
		std::condition_variable cv;

		std::thread start(m_heatingElements.turnOn,this->m_heatingElements);

		bool stop = false;

		while ( MicrowaveSystem::globalTime >= 0){
			cout << "Time left: " << MicrowaveSystem::globalTime << " seconds."<< endl;
			Sleep(1000);

			MicrowaveSystem::globalTime --;
		}
		m_heatingElements.turnOff();

	}




}



