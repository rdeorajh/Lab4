#include <iostream>
#include "electrolyte.h"
#include "BloodTest.h"
#include <string>
using namespace std;

//Implementation of Electrolyte Class

electrolyte::electrolyte(string patName){
    int i;
    bool flag;
    char temp;
    string dummy;


    cName = "Electrolyte Panel";

    n = 4;
    string varN[4] = {"Sodium Level","Potassium Level","Chloride Level","Bicarbonate Level"};
    string varU[4] = {"mM","mM", "mM", "mM"};
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
    getline(cin, dummy);
    cout<<"\nPlease Enter Your Name. Then press Enter.\n ";
    getline(cin, Name);

    cout<<"\nInput a comment to append to this file. Then press Enter.\n";
    getline(cin, Comm);

    rfile<<"\nPatient: "<<patName<<endl;

    //Append to the File
    Results();

}

void electrolyte::Update(){
    //Parameter Update
    int i;
    for(i=0;i<n;i++){
        cout<<"For the "<<param[i]<<" parameter, enter the new value\n";
        cin>>data[i];
    }
}


void electrolyte::View(){
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

void electrolyte::Comment(){
    string temp;
    getline(cin, temp);
    cout<<"\nPlease Enter Your Name. Then press Enter.\n ";
    getline(cin, Name);

    cout<<"\nInput a comment to append to this file. Then press Enter.\n";
    getline(cin, Comm);

}

void electrolyte::Diagnose(){
    //Appends to the File
    //Data Courtesy of http://health.yahoo.net/galecontent/electrolyte-tests/3
    int i=0;
    if(data[i]>136&&data[i]<145)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;

    i++;//i=1
    if(data[i]>3.5&&data[i]<5)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;

    i++;//i=2
    if(data[i]>98&&data[i]<106)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;

    i++;//i=3
    if(data[i]>26&&data[i]<28)
        rfile<<"\n"<<param[i]<<" is normal"<<endl;
    else
        rfile<<"\n"<<param[i]<<" is abnormal"<<endl;

}
