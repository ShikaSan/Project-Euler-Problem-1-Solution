#include <iostream>
#include <math.h>

using namespace std;

void problem_three(long long int x);

int main()
{
    long long int n = 20;

    problem_three(n);

    return 0;
}

void problem_three(long long int x)
{
    long long int i = 3;

    while(x%2==0)
    {
        cout<< 2 << " ";
        x = x / 2;
    }

    long long int sqr_rt = sqrt(x);

    do
    {
        while(x % i == 0)
        {
            cout<< i << " ";
            x = x/i;
        }

        i = i + 2;
    }
    while(i < sqr_rt);
}
