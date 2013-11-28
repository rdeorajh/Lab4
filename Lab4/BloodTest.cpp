#include <iostream>
#include <cstring>
#include "BloodTest.h"
#include "CBC.h"
#include <fstream>
#include <ctime>
using namespace std;

//Blood test function definitions

BloodTest::BloodTest(){
    //Open File
    rfile.open("BloodResults.txt", ios::app);
    rfile<<"***************************"<<endl;


}
BloodTest::~BloodTest(){
    //Close File
    rfile<<"***************************"<<endl;
    rfile.close();
}

//Results
void BloodTest::Results(){

    time_t now = time(0);
    char* dt = ctime(&now);

    rfile<<"Date: "<<dt<<endl;
    rfile<<"Update for: "<<cName<<endl;

    rfile<<"\nGender: ";

    //Gender Printout
    if(gender == 0)
        rfile<<"Male "<<endl;
    else
        rfile<<"Female "<<endl;

    //Printing the Data
    int i;
    rfile<<"\n";
    for(i=0;i<n;i++){
        rfile<<param[i]<<": "<<data[i]<<" "<<unit[i]<<endl;
    }

    //Printing the Comment
    rfile<<"\n";
    rfile<<"Comment by "<<Name<<": "<<endl;
    rfile<<Comm<<endl;
}
