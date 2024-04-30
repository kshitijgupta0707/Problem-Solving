#include <iostream>
#include <vector>
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

        bool present = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                present = true;
                break;
            }
        }
        if (present)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}