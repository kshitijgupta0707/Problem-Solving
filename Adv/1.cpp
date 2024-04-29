#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (k == 1)
        {
            bool asc = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    asc = false;
                    break;
                }
            }
            if (asc)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}