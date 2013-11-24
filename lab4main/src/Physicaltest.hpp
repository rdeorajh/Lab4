/*
 * Physicaltest.hpp
 *
 *  Created on: Nov 23, 2013
 *      Author: AhmedNiri
 */
#include<iostream>
#ifndef PHYSICALTEST_HPP_
#define PHYSICALTEST_HPP_
using namespace std;
class Physicaltest {
string fullname,position;
char idnumber;
char age;
char weight;
char medication;
char med_history;

public:
	Physicaltest();
	virtual ~Physicaltest();
	string nameofpatient();//Takes the full name of the patient
	char basicinfo();//Patients ID number, age, weight, medication previously used and medical history (any sickness or disease)
	string caregiver();//This name can be a name of any care giver and their position.
	int time();//This provides us with the time a specific task was preformed.
};

#endif /* PHYSICALTEST_HPP_ */
