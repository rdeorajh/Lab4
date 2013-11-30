/*
 * CT.cpp
 *
 *  Created on: Nov 28, 2013
 *      Author: Owner
 */


#include "CT.hpp"

#include <fstream>
#include <ctime>

CT::CT(string File, int Bits, bool rDirection, double eTime, double xCurr)                      //constructor MRI
:ImageBase(File,Bits), rotationDirection(rDirection), exposureTime(eTime), xCurrent(xCurr){
}

CT::CT(){                       //default constructor



	cout << "What was the direction of rotation?" <<endl <<"1 for clockwise, 0 for counterclockwise";

	cin  >> rotationDirection;

	cout << "\nExposure time in msecs?";

	cin  >> exposureTime;

	cout << "\nWhat was the current in the X-ray Tube in mA?";

	cin  >> xCurrent;

}


void CT::results(){
	ofstream fout("ImageSessionLog.txt",ios_base::app);              //time STAMP IT
	fout <<"***************************************************\n";
	fout << "Appended on: ";
	time_t timer;
	time(&timer);
	fout << ctime(&timer);

	fout << "\nImage Type: CT\n";

	fout << "\nImage on File: " << ImageFileName << endl<<endl;

	fout << "Bits/Pixel: " <<bitsAllocated<<endl;
	fout << "Exposure time in msecs: " <<exposureTime<< " msec"<<endl;
    fout << "Rotation Direction: ";
    if(rotationDirection){
    	fout << "CW"<<endl;
      }
    else
    {
    	fout<<"CCW"<<endl;
    }

    fout <<"X-ray tube current: "<<xCurrent;

    fout <<"\nSummary: "<< summary;

    displayImage();

}
