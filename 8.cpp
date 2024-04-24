#include <iostream>
#include <math.h>
using namespace std;
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using BigInt = mp::cpp_int;

int main()
{
    BigInt n;
    cin >> n;
    BigInt sum;
    if (n % 2 == 0)
    {
        sum = (n * (n + 1)) / 2 - (2 * pow(n / 2, 2));
    }
    else
    {
        sum = (n * (n + 1)) / 2 - (2 * pow(n / 2 + 1, 2));
    }
    cout << sum;
}