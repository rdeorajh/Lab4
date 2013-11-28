#include <iostream>
#include "protein.h"
#include "BloodTest.h"
#include <string>
using namespace std;

//Implementation of Protein Class

protein::protein(string patName){
    int i;
    bool flag;
    char temp;
    string dummy;


    cName = "Protein Levels";

    n = 3;
    string varN[3] = {"Total Cholesterol","LDL Level","HDL Level"};
    string varU[3] = {"mg/dL","mg/dL", "mg/dL"};

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

void protein::Comment(){
    string temp;
    getline(cin, temp);
    cout<<"\nPlease Enter Your Name. Then press Enter.\n ";
    getline(cin, Name);

    cout<<"\nInput a comment to append to this file. Then press Enter.\n";
    getline(cin, Comm);

}

void protein::Update(){
    //Parameter Update
    int i;
    for(i=0;i<n;i++){
        cout<<"For the "<<param[i]<<" parameter, enter the new value\n";
        cin>>data[i];

}
}

void protein::View(){
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

void protein::Diagnose(){
    int i=0;

    //Appends Data to a file
    //Data Courtesy of http://www.nhlbi.nih.gov/health/health-topics/topics/bdt/show.html
    if(data[i]<200)
        rfile<<param[i]<<" is at desired level"<<endl;
    else if (data[i]<239)
        rfile<<param[i]<<" is at borderline high level"<<endl;
    else
        rfile<<param[i]<<" is at a high level"<<endl;

    i++;//i=1

    if(data[i]<100)
        rfile<<param[i]<<" is at the optimal level"<<endl;
    else if(data[i]<129)
        rfile<<param[i]<<" is above the optimal level"<<endl;
    else if(data[i]<159)
        rfile<<param[i]<<" is at the borderline high level"<<endl;
    else if(data[i]<189)
        rfile<<param[i]<<" is at a high level"<<endl;
    else
        rfile<<param[i]<<" is at a very high level"<<endl;

    i++;//i=2

    if(data[i]<40)
        rfile<<param[i]<<"s indicate a high risk for heart disease"<<endl;
    else if(data[i]<59)
        rfile<<param[i]<<"s a low risk for heart disease"<<endl;
    else
        rfile<<param[i]<<"s a very minimal risk for heart disease"<<endl;
}
