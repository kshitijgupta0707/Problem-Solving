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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                sorted = false;
                break;
            }
        }

        int minDiff = INT_MAX;
        int k;
        if (sorted)
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i] - arr[i - 1] < minDiff)
                {
                    minDiff = arr[i] - arr[i - 1];
                    k = i - 1;
                }
            }
            int c = (arr[k + 1] - arr[k]) / 2 + 1;
            cout << c << endl;
        }
        else cout << "0" << endl;
    }
}