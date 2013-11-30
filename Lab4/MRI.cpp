/*
 * MRI.cpp
 *
 *  Created on: Nov 22, 2013
 *      Author: Owner
 */


#include "MRI.hpp"

#include <fstream>
#include <ctime>

MRI::MRI(string File, int Bits, double mField, bool angio, string Nucleus)                      //constructor MRI
:ImageBase(File,Bits), magneticFieldStrength(mField), angioFlag(angio), imagedNucleus(Nucleus){
}

MRI::MRI(){                       //default constructor



	cout << "Magnetic Field Strength of MRI?";

	cin  >> magneticFieldStrength;

	cout << "\nWas Angio used? 1 yes, 0 no";

	cin  >> angioFlag;

	cout << "\nWhat nucleus was used to image?";

	cin  >> imagedNucleus;

}


void MRI::results(){
	ofstream fout("ImageSessionLog.txt",ios_base::app);              //time STAMP IT
	fout <<"***************************************************\n";
	fout << "Appended on: ";
	time_t timer;
	time(&timer);
	fout << ctime(&timer);

	fout << "\nImage Type: MRI\n";

	fout << "\nImage on File: " << ImageFileName << endl<<endl;

	fout << "Bits/Pixel: " <<bitsAllocated<<endl;
	fout << "Magnetic Field Strength: " <<magneticFieldStrength<< " Tesla"<<endl;
    fout << "Angio?: ";
    if(angioFlag){
    	fout << "Yes"<<endl;
      }
    else
    {
    	fout<<"no"<<endl;
    }

    fout <<"imagedNucleus: "<<imagedNucleus;

    fout <<"\nSummary: "<< summary;

    displayImage();

}
