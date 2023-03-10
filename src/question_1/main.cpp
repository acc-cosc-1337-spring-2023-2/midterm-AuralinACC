#include "question1.h"


using std::cout; using std::cin;

int main()
{
    int cookies;
    auto quit = 'n';
    
    while(quit != 'y' && quit != 'Y')
    {
        cout<<"\nHow many cookies would you like to make? ";
        cin>>cookies;
        
        cout<<"\nTo make "<<cookies<<" cookies, you need: \n";
        cout<<get_cookie_ingredients(cookies)[0]<<" cups of Sugar\n";
        cout<<get_cookie_ingredients(cookies)[1]<<" cups of butter\n";
        cout<<get_cookie_ingredients(cookies)[2]<<" cups of flour\n\n";

        cout<<"do you want to quit? (Y/N) ";
        cin>>quit;
    }

    return 0;
}