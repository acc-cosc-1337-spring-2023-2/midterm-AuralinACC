#include "question2.h"
#include<iostream>

using std::cin; using std::cout;

int main()
{
    auto prompt = 'y';
    string binary_num = "00000000";
    //Using loops prompt the user for a binary string value.
    while (prompt == 'y' || prompt =='Y')
    {
        cout<<"Enter 8 1s and or 0s: ";
        cin>>binary_num;
        //the string must contain only 1s and 0s
        //(user the string contrains function to make this easier)
        //validate the string for length 8
        if(binary_num.length() == 8 && binary_num.find_first_not_of("01") == std::string::npos)
        {
            cout<<"The binary number entered is "<<binary_to_decimal(binary_num)<<" in decimal form.\n\n";
        }
        else
        {
            cout<<"\nInvalid entry\n\n";
        }

        //The program will run until the user opts out(types a character to exit the program) 
        cout<<"Would you like to continue? (Y/N) ";
        cin>>prompt;
        cout<<"\n";
    } 
    
    return 0;
}