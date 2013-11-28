/*
 * MRI.hpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Owner
 */

#ifndef MRI_HPP_
#define MRI_HPP_

#include <iostream>
#include "ImageBaseClass.hpp"
using namespace std;

class MRI: public ImageBase{

	private:

	double magneticFieldStrength;   //magnetic field strength of mri machine
	bool angioFlag;                //did they use angio? 1 is yes, 0 is no
	string imagedNucleus;        //what nucleus was used to image? usually 1H?

	public:
	MRI();      //default constructor;
	MRI(string FIle, int Bits, double mField, bool angio, string Nucleus); //constructor
	void results();    //append image information and display image


};





#endif /* MRI_HPP_ */
