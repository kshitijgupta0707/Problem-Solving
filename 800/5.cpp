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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i;
        for (i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                // swap(a[i], a[i + 1]);
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                // check from starting firse
                i = 0;
            }
        }
        bool sorted = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                sorted = false;
            }
        }
        if (sorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}