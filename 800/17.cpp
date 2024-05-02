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
        int a = 1;
        int ans = -1;
        for (int i = 0; i < n - 1; i++)
        {
            a = a * arr[i];
            int b = 1;
            for (int j = i + 1; j < n; j++)
            {
                b *= arr[j];
            }
            if (a == b)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
}