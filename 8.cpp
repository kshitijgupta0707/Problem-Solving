#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum;
    if (n % 2 == 0)
    {
        sum = n / 2;
    }
    else
    {
        sum = -2 - (3 * n) / 2;
    }
    cout << sum;
}