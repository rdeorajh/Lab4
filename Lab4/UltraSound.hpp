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

	double magneticFieldStrength;   //magnetic field strength of mri machine
	bool angioFlag;                //did they use angio? 1 is yes, 0 is no
	string imagedNucleus;        //what nucleus was used to image? usually 1H?

	public:
	UltraSound();      //default constructor;
	UltraSound(string FIle, int Bits, double mField, bool angio, string Nucleus); //constructor
	void results();    //append image information and display image


};









#endif /* ULTRASOUND_HPP_ */
