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

}


void ImageBase::Annotate(std::string fileToAppend){

	ofstream fout("ImageSessionLog.txt",ios_base::app);
	fout <<"--------------------------------------------------\n";
	fout << "Appended on: ";
	time_t timer;
	time(&timer);
	fout << ctime(&timer);

	fout << "\nImage on File: " << ImageFileName;




	string s;
	string comment;

	cout <<"Who is appending? Please enter Name/ID";

	cin.ignore();
	getline(cin,s);


	fout<< "\nAuthored by:";
	fout<< s;
	fout<<"\n";

	cout << "\nAdd your comments (MAX 100 Characters)";

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
