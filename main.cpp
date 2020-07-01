#include <iostream>
#include <math.h>

using namespace std;

int sumOf()
{
    int ctr;
    int sum = 0;

    for(ctr = 1; ctr < 1000; ctr++)
    {
            if(ctr%3 == 0 || ctr%5 == 0)
            {
                sum += ctr;
            }
    }

    return sum;
}

int main()
{
    int num = sumOf();

    cout<< "The sum of the mutiples of 3 and 5 and are natural numbers below 1000 is: " << num << endl;

    return 0;
}
