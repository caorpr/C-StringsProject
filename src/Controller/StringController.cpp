/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: cand3952
 */

#include <iostream>
#include "StringController.h"
using namespace std;

StringController::StringController()
{
	cout << "Creating SIMPLE CONTROLLER!!" << endl;
	cout << this->age << endl;
}

void StringController::start()
{
	cout << "Now inside the start method" << endl;
	int temporary;
	cin >> temporary;
	this->setAge(temporary);
	cout << "The new age is: " << this->age << endl;
}

void StringController::setAge(int age)
{
	this->age = age;
}
