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

        // 2 3 3 3 3 n = 5
        if (n == 2)
        {
            cout << "Yes" << endl;
            continue;
        }
        else
        {
            if (n % 2 == 0)
            {
                // even
                // contain only 2 types of number{
                int a, b = INT_MIN;
                a = arr[0];
                for (int i = 1; i < n; i++)
                {
                    if (arr[i] != a)
                    {
                        b = arr[i];
                        break;
                    }
                }
                if (b == INT_MIN)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    // check count of a and b;
                    int acount = 0, bcount = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (arr[i] == a)
                        {
                            acount++;
                        }
                        if (arr[i] == b)
                        {
                            bcount++;
                        }
                    }
                    if (acount == bcount == n / 2)
                    {
                        cout << "Yes" << endl;
                    }
                    else
                    {
                        cout << "No" << endl;
                    }
                }
            }
            else
            {
                // odd
                // contain only 2 types of number{
                int a, b = INT_MIN;
                a = arr[0];
                for (int i = 1; i < n; i++)
                {
                    if (arr[i] != a)
                    {
                        b = arr[i];
                        break;
                    }
                }
                if (b == INT_MIN)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    // check count of a and b;
                    int acount = 0, bcount = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (arr[i] == a)
                        {
                            acount++;
                        }
                        if (arr[i] == b)
                        {
                            bcount++;
                        }
                    }
                    if (acount == n / 2)
                    {
                        if (bcount == n / 2 + 1)
                        {
                            cout << "Yes" << endl;
                        }
                        else
                        {
                            cout << "No" << endl;
                        }
                    }
                    else if (bcount == n / 2)
                    {
                        if (acount == n / 2 + 1)
                        {
                            cout << "Yes" << endl;
                        }
                        else
                        {
                            cout << "No" << endl;
                        }
                    }
                    else
                    {
                        cout << "No" << endl;
                    }
                }
            }
        }
    }
}
