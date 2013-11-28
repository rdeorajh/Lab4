#ifndef PROTEIN_H
#define PROTEIN_H
#include "BloodTest.h"

//Derived Class - Protein Levels

class protein : public BloodTest
{
    public:
        //Filling the Arrays
        protein(string patName);
        //Update CBC with current results
        void Update();
        //View Current CBC Data
        void View();
        //Append these results and comments to text file.
        void Diagnose();
        //Append Comment with results
        void Comment();
};

#endif // PROTEIN_H
