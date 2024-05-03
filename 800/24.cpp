#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int x = 9;
        int i = 1;
        int sum = 0;
        while (1)
        {
            if (x < n)
            {
                sum += x / i;
                i = i * 10;
                x = x * 10;
            }
            else
            {
                sum += n / i;
                break;
            }
        }
        cout <<sum << endl;
    }
}