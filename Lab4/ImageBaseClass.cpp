/*
 * ImageBaseClass.cpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Owner
 */

#include "ImageBaseClass.hpp"
#include <fstream>
#include <ctime>
#include <cstdlib>


ImageBase::ImageBase(string File, int Bits){


	ImageFileName=File;
	bitsAllocated=Bits;

}

ImageBase::ImageBase(){

	userEnterData();

}

void ImageBase::displayImage(){// some function to display image;



	int TempNumOne=ImageFileName.size();  //switch string to char based for system function
	char Filename[100];
	for (int a=0;a<=TempNumOne;a++)
	        {
	            Filename[a]=ImageFileName[a];
	        }


system(Filename);


}



void ImageBase::userEnterData(){

	cout << "What is the Image's File Name";

	cin  >> ImageFileName;

	cout << "\nHow many bits allocated per pixel?";

	cin  >> bitsAllocated;
}


void ImageBase::Comment(){

	ofstream fout("ImageSessionLog.txt",ios_base::app);
	fout <<"**************************************************\n";
	fout << "Appended on: ";
	time_t timer;
	time(&timer);
	fout << ctime(&timer);






	string s;
	string comment;

	cout <<"Who is appending? Please enter Name/ID";

	cin.ignore();
	getline(cin,s);


	fout<< "\nAuthored by:";
	fout<< s;


	fout << "\nImage on File: " << ImageFileName << endl<<endl;

	cout << "\nAdd your comments (MAX 100 Characters)";

	fout <<"Comments:\n";

	  while(comment.length()<100){

		  getline(cin,s);   //get the next line

		  if(s.empty())       //is it empty?
			 break;
		  else
			 comment=comment+s+"\n";         // if it isnt put it on the end.


	  }



	fout << comment;


	fout.close();      //close file
}



void ImageBase::insertSummary(){
	string s;

	cout << "\nEnter Summary Below (Max 100 words)"<<endl;

	  while(summary.length()<100){

		  getline(cin,s);   //get the next line

		  if(s.empty())       //is it empty?
			 break;
		  else
			 summary=summary+s+"\n";         // if it isnt put it on the end.


	  }



}



