/*
 * ImageBaseClass.cpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Owner
 */

#include "ImageBaseClass.hpp"
#include <fstream>
#include <ctime>

void ImageBase::displayImage(){

	cout <<ImageFileName;

// some function to display image;
}



void ImageBase::enterFileName(){

	cout << "What is the Image's File Name";

	cin  >> ImageFileName;

	cout << "What is the Patient's Log File's Name?";

	cin  >> LogFileName;

}


void ImageBase::Annotate(){

	ofstream fout("ImageSessionLog.txt",ios_base::app);
	fout <<"--------------------------------------------------\n";
	fout << "Appended on: ";
	time_t timer;
	time(&timer);
	fout << ctime(&timer);

	fout << "\nImage on File: " << ImageFileName;

	cout << "Add your comments (MAX 100 Characters)";


	string s="ooo";
	string comment;

int x=s.length();

cout <<x;

	/*while(s.length()>0){     //add comment while it is less then 101 chars
		getline(cin,s);
		comment=comment+s+"\n";
		}
*/
	fout << comment;


	fout.close();      //close file
}
