#include "question3.h"
#include<iostream>

using std::cin; using std::cout;

int main()
{
    auto quit = 'n';
    while( quit != 'y' && quit != 'Y')
    {
        auto num = 0;
        cout<<"\nEnter a number from 1 to 60: ";
        cin>>num;

        if(num >= 1 && num <=60)
        {
            //pass the number to the get_primes function save the return value to a variable in main
            vector<int> primes = get_primes(num);
            cout<<"The primes are: ";
            bool first = true;
            for (int prime : primes)
            {
                if(!first)
                {
                cout<<", ";
                }
                else
                {
                    first = false;
                }
                cout<<prime;
            }
            cout<<"\n\n";
            
        }
        else
        {
            cout<<"\nInvalid entry \n\n";
        }
        cout<<"Would you like to quit? (Y/N) ";
        cin>>quit;
    }

    return 0;
}