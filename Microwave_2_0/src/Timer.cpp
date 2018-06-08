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
#include <functional>


namespace MicrowaveSystem{
	std::mutex m;
	std::condition_variable cv;

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

		if (MicrowaveSystem::timeLeft > 0){
			result = true;
		}else{
			result = false;
		}
		return result;
	}

	// Timer Fuinctions ///

	void
	Timer::stopTime(){
		this->Pause();



	}


	void
	Timer::startTime(){


		 m_heatingElements.turnOn();

		while(MicrowaveSystem::globalTime > 0 ){


		cout << "Time left: " << MicrowaveSystem::globalTime << " seconds."<< endl;
		MicrowaveSystem::globalTime --;
		Sleep(1000);
		}

		m_heatingElements.turnOff();

	}


	void Timer::Start(){
		this->startTime();
	}
	void Timer::Pause(){


		MicrowaveSystem::timeLeft = MicrowaveSystem::globalTime;
		MicrowaveSystem::isPaused=true;


	}
	void Timer::Resume(){
		MicrowaveSystem::isPaused=false;


	     //resume t2
	}



}



