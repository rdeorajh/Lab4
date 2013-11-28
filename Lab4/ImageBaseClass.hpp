/*
 * ImageBaseClass.hpp
 *
 *  Created on: Nov 12, 2013
 *      Author: Owner
 */

#ifndef IMAGEBASECLASS_HPP_
#define IMAGEBASECLASS_HPP_

#include <iostream>
using namespace std;

class ImageBase{

	protected:

	string ImageFileName;        //holds the image file name;
	int bitsAllocated;           //amount of bits needed for pixel sample
	string summary;             //hold the summary for this object

	public:

	ImageBase(string FILE,int Bits); //default constructor
	ImageBase();
	void userEnterData();      //Let the user enter the file name, and other data points;
	void displayImage(void);   // display the image to screen
	void Comment();    //append comments to logfile
	void insertSummary(); //insert the comment by user.
};







#endif /* IMAGEBASECLASS_HPP_*/
