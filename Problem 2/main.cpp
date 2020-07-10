#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long int terms = 20000*200;
    long int i = 1;
    long int x = 1;
    long int result = 0;
    long int summed = 0;

    do
    {
        if((result%2)==0)
        {
            summed  += result;
        }

        result = i + x;
        x = i;
        i = result;
    }
    while(result < terms);

    cout<< summed << endl;

    return 0;
}

