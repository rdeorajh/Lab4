/*
 * UltraSound.cpp
 *
 *  Created on: Nov 28, 2013
 *      Author: Owner
 */


#include "UltraSound.hpp"

#include <fstream>
#include <ctime>

UltraSound::UltraSound(string File, int Bits, double freq, bool cData, string aPosition)                      //constructor MRI
:ImageBase(File,Bits), frequency(freq), colourData(cData), anatomicPosition(aPosition){
}

UltraSound::UltraSound(){                       //default constructor

	cout << "Frequency used to UltraSound?";

	cin  >> frequency;

	cout << "\nIs colour data available? 1 yes, 0 no";

	cin  >> colourData;

	cout << "\nAnatomic Position?";

	cin  >> anatomicPosition;

}


void UltraSound::results(){
	ofstream fout("ImageSessionLog.txt",ios_base::app);              //time STAMP IT
	fout <<"***************************************************\n";
	fout << "Appended on: ";
	time_t timer;
	time(&timer);
	fout << ctime(&timer);

	fout << "\nImage Type: UltraSound\n";

	fout << "\nImage on File: " << ImageFileName << endl<<endl;

	fout << "Bits/Pixel: " <<bitsAllocated<<endl;
	fout << "UltraSound Frequency: " <<frequency<< " GHz"<<endl;
    fout << "ColourData?: ";
    if(colourData){
    	fout << "Yes"<<endl;
      }
    else
    {
    	fout<<"no"<<endl;
    }

    fout <<"Anatomic Position: "<<anatomicPosition;

    fout <<"\nSummary: "<< summary;

    displayImage();

}
