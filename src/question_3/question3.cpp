#include "question3.h"

bool test_config()
{
    return true;
}

bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for(int i = 2; i * i <= num; i++ )
    {
        int dividend = num;
        int result = dividend % i;

        if(result == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> get_primes(int num)
{
    vector<int> prime_nums;
    for (int i = 1; i < num; i++)
    {
        if (is_prime(i) == true)
        {
            prime_nums.push_back(i);
        }
    }
    return prime_nums;
}