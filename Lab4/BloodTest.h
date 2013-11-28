#ifndef BLOODTEST_H
#define BLOODTEST_H
#include <string>
#include <fstream>
using namespace std;

/*Base Class - BloodTest*/


class BloodTest
{
    public:
        //Open File
        BloodTest();
        //Close File
        ~BloodTest();
        //Push an Append to a file
        void Results();

    protected:
        //Parameters:
        //Includes Red Blood Cell Count, White Blood Cell Count, Hemoglobin, and MCV
        //Includes Sodium, Potassium, Chloride and Bicarbonate
        //Includes Total Cholesterol, HDL and LDL

        //Create File Object
        ofstream rfile;
        //Gender of the Patient 0=Male,1=Female
        bool gender;
        //Pointer to parameter array to be constructed
        string *param;
        //Pointer to data array to be constructed
        float *data;
        //Pointer to unit array to be constructed
        string *unit;
        //Comments to Append to Test
        string Comm;
        //Info for person that can append
        string Name;
        //Name of the Derived Class that is constructed
        string cName;
        //Array Index
        int n;
        //Patient Name

};

#endif // BLOODTEST_H
