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
        int size;
        cin >> size;
        int arr[size];
        for (int i = 1; i < size; i++)
        {
            cin >> arr[i];
        }
        int maxi = arr[1];
        int index = 1;
        for (int i = 2; i < size; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                index = i;
            }
        }

        vector<int> v(size + 1);
        v[index] = arr[index] + 1;
        for (int i = index + 1; i <= size; i++)
        {
            v[i] = v[i - 1] + arr[i - 1];
        }
        for (int i = index - 1; i >= 1; i--)
        {
            v[i] = v[i + 1] - arr[i];
            if (v[i] == 0)
            {
                v[i] = v[i + 1] + 1;
            }
        }

        for (int i = 1; i <= size; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}