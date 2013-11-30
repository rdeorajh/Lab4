/*
 * CT.hpp
 *
 *  Created on: Nov 28, 2013
 *      Author: Owner
 */

#ifndef CT_HPP_
#define CT_HPP_

#include <iostream>
#include "ImageBaseClass.hpp"
using namespace std;

class CT: public ImageBase{

	private:

	bool rotationDirection;   //Direction of rotation of source, ClockWise/CounterClockWise
	double exposureTime;                //time of x-ray exposure in msec
	double xCurrent;        // x-ray tube current in mA

	public:
	CT();      //default constructor;
	CT(string FIle, int Bits, bool rDirection, double eTime, double xCurr); //constructor
	void results();    //append image information and display image


};





#endif /* CT_HPP_ */
