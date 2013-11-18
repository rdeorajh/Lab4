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

	private:

	string ImageFileName;        //holds the image file name;
	string LogFileName;          //holds the annotations/comment file name


	public:

	void enterFileName();      //enter the file names
	void displayImage(void);   // display the image to screen
	void Annotate();           //append comments to logfile

};







#endif /* IMAGEBASECLASS_HPP_ */
