/*
 * vital_signs_test.hpp
 *
 *  Created on: Nov 23, 2013
 *      Author: AhmedNiri
 */
#include<iostream>
#include<ctime>
#include "Physicaltest.hpp"
using namespace std;
#ifndef VITAL_SIGNS_TEST_HPP_
#define VITAL_SIGNS_TEST_HPP_

class Vital_signs_test : public Physicaltest  {
double body_temp;
int pulse_rate, Respiration_rate;
double Blood_pressure;
public:
	Vital_signs_test();
	virtual ~Vital_signs_test();
	double temperature();//body temp
	int rates();//The pulse rate
	double Pressure();//blood pressure of the patient

};

#endif /* VITAL_SIGNS_TEST_HPP_ */
