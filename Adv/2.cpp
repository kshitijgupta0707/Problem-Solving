#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxDiff = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > maxDiff)
            {
                maxDiff = arr[i] - arr[i - 1];
            }
        }
        if (arr[0] > maxDiff)
            maxDiff = arr[0];
        if ((x - arr[n - 1]) * 2 > maxDiff)
            maxDiff = (x - arr[n - 1])*2;
         cout << maxDiff << endl;
    }
}