#ifndef CBC_H
#define CBC_H

//Derived Class - Complete Blood Count


class CBC : public BloodTest
{
    public:
        //Put Results in the Array
        CBC(string patName);
        //Update CBC with current results
        void Update();
        //View Current CBC Data
        void View();
        //Append these results and comments to text file.
        void Diagnose();
        //Append Comment with results
        void Comment();
};

#endif // CBC_H
