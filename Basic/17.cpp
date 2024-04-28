// Given a number N.Print the factorial of number N.

//     Input
//         First line contains a number T(1 ≤ T ≤ 15) number of test cases.

//     Next T lines will contain a number N(0 ≤ N ≤ 20)

//         Output
//     For each test case print a single line contains the factorial of N.

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int multiply = 1;
        for (int i = 2; i <= n; i++)
        {
            multiply = multiply * i;
        }
        cout << multiply << endl;
    }
}