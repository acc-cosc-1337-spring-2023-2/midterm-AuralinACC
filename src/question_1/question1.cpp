#include "question1.h"
//In the cpp file, write code to calculate the correct cups for each ingredient and return the 3 values in a vector of double.

bool test_config()
{
    return true;
}

/*
The following recipe produces 48 cookies:
1.5 cups of sugar
1 cup of butter
2.75 cups of flour
Write a function that accepts the number of cookies to bake and returns the cups of sugar, butter, and flour to use to bake the desired number of cookies.?
*/

vector<double> get_cookie_ingredients(int cookies)
{
    vector<double> ingredients;

    // compute the amount of ingredients needed
    //1 cookie = 1.5/48 cups of sugar + 1/48 cups of butter + 2.27/48 cups of flour
    double sugar = cookies * 1.5/48.0;
    double butter = cookies * 1.0/48.0;
    double flour = cookies * 2.75/48.0;

    // add the ingredient amounts to the vector
    ingredients.push_back(sugar);
    ingredients.push_back(butter);
    ingredients.push_back(flour);

    return ingredients;
}