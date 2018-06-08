/*
 * main_func.cpp
 *
 *  Created on: May 22, 2018
 *      Author: Micha
 */

#include <iostream>
#include "utils.h"
#include <thread>
#include <mutex>
#include <condition_variable>

int main (int argc, char* argv[]){
using namespace MicrowaveSystem;



KeyPad keypad;

keypad.setTime();
keypad.pressStart();
Sleep(1000);
keypad.pressStop();
keypad.pressStart();


	return 0;
}


