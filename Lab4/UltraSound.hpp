/*
 * UltraSound.hpp
 *
 *  Created on: Nov 28, 2013
 *      Author: Owner
 */

#ifndef ULTRASOUND_HPP_
#define ULTRASOUND_HPP_


#include <iostream>
#include "ImageBaseClass.hpp"
using namespace std;

class UltraSound: public ImageBase{

	private:

	double frequency;   //frequency of pressure waves in GHz
	bool colourData;                //was colour data available? 1 is yes, 0 is no
	string anatomicPosition;        //Prone? Supine? Position of interest

	public:
	UltraSound();      //default constructor;
	UltraSound(string FIle, int Bits, double freq, bool cData, string aPosition); //constructor
	void results();    //append image information and display image


};









#endif /* ULTRASOUND_HPP_ */
