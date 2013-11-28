#include <iostream>
#include <cstring>
#include <ctime>
#include "BloodTest.h"
#include "CBC.h"
using namespace std;

//Implementation - Complete Blood Count

CBC::CBC(string patName){
    int i;
    bool flag;
    char temp;
    string dummy;


    cName = "Complete Blood Count";

    n = 4;
    string varN[4] = {"Red Blood Cell Level","White Blood Cell Level","Hemoglobin Level","Mean Corpuscular Volume"};
    string varU[4] = {"million cells/mcL","cells/mcL", "g/dL", "femtolitres"};
    param = new string[n];
    data = new float[n];
    unit = new string[n];

    for(i=0;i<n;i++){
        param[i] = varN[i];
        unit[i] = varU[i];
    }




    //Gender Assignment
    cout<<"Enter the Gender of the Patient. Then press Enter."<<endl;
    cout<<"1: Male\n2: Female\n"<<endl;

    flag = 1;
    while(flag){
        cin>>temp;
        if(temp =='1'){
            gender = 0;
            flag = 0;
        }
        else if(temp == '2'){
            gender = 1;
            flag = 0;
        }
        else
            cout<<"\nERROR. INVALID QUANTITY.\n";
    }


    //Initial Input for Data
    for (i=0;i<n;i++){
        cout<<"Enter the Value of "<<param[i]<<"("<<unit[i]<<")"<<endl;

        flag = 1;
        while(flag){
            cin>>data[i];
            if(data[i]<0)
                cout<<"INVALID. ENTER AGAIN\n";
            else
                flag=0;
        }
    }

    //Initial Comment Input
    cin.ignore();
    getline(cin, dummy);
    cout<<"\nPlease Enter Your Name. Then press Enter.\n ";
    getline(cin, Name);

    cout<<"\nInput a comment to append to this file. Then press Enter.\n";
    getline(cin, Comm);

    rfile<<"\nPatient: "<<patName<<endl;

    //Append to the File
    Results();

}

void CBC::Update(){
    //Parameter Update
    int i;
    for(i=0;i<n;i++){
        cout<<"For the "<<param[i]<<" parameter, enter the new value\n";
        cin>>data[i];
    }

}



void CBC::Comment(){

    string temp;
    getline(cin, temp);

    cout<<"\nPlease Enter Your Name. Then press Enter.\n ";
    getline(cin, Name);

    cout<<"\nInput a comment to append to this file. Then press Enter.\n";
    getline(cin, Comm);
}



void CBC::View(){
    //Most Recent Update Viewer (before push)
    int i;
    cout<<"\n";
    for(i=0;i<n;i++){
        cout<<param[i]<<": "<<data[i]<<unit[i]<<endl;
    }
    cout<<"\n";
    cout<<"Comment by "<<Name<<": "<<endl;
    cout<<Comm<<endl;
}



void CBC::Diagnose(){
//Produce Diagnosis, and Append to File
//Data taken from: http://www.nhlbi.nih.gov/health/health-topics/topics/bdt/show.html


int i=0;
if(gender==0){
    if(data[i]>5&&data[i]<6)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;
}
else{
    if(data[i]>4&&data[i]<5)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;
}


i++;//i=1
if(data[i]>4500&&data[i]<10000)
    rfile<<"\n"<<param[i]<<" is normal"<<endl;
else
    rfile<<"\n"<<param[i]<<" is abnormal"<<endl;



i++;//i=2
if(gender==0){
    if(data[i]>14&&data[i]<17)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;
}
else{
    if(data[i]>12&&data[i]<15)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;
}


i++;//i=3
if(data[i]>80&&data[i]<95)
    rfile<<"\n"<<param[i]<<" is normal"<<endl;
else
    rfile<<"\n"<<param[i]<<" is abnormal"<<endl;


}

