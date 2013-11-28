#ifndef ELECTROLYTE_H
#define ELECTROLYTE_H
#include "BloodTest.h"

//Derived Class - Electrolyte Levels

class electrolyte : public BloodTest
{
    public:
        //Fill in Data
        electrolyte(string patName);
        //Update CBC with current results
        void Update();
        //View Current CBC Data
        void View();
        //Append these results and comments to text file.
        void Diagnose();
        //Append Comment with results
        void Comment();

};

#endif // ELECTROLYTE_H
