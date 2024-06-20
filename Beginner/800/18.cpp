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
        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool same = true;
            int ch = arr[0];
            // check sab kuch same toh ni hain
            for (int i = 1; i < n; i++)
            {
                if (arr[i] != ch)
                {
                    same = false;
                    break;
                }
            }
            // find max

            int max = INT_MIN;
            int index = -1;
            if (same)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] > max)
                    {
                        max = arr[i];
                        index = i;
                    }
                }
                swap(arr[0], arr[index]);
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }
}
