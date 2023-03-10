#include "question4.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    //Prompt the user for Y, if Y the program rolls the die, displays the result,  
    //and continues to prompt the user until the user types something other than Y.
    auto choice = 'Y';
    
    while ( choice == 'Y' || choice == 'y')
    {
        cout<<"Would you like to roll a die? (Y/N)";
        cin>>choice;
        if(choice == 'Y' || choice == 'y')
        {
            cout<<"\nThe die roll is: "<<roll_die()<<"\n\n";
        }
    }
    return 0;
}