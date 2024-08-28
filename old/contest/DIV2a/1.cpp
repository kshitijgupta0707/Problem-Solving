#include <iostream>
#include <vector>
using namespace std;
pair<bool, int> check(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            return {false, i};
        }
    }
    return {true, -1};
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int c = 0;
        while (!check(a, b, n).first)
        {
            c++;
            int i = check(a, b, n).second;

            for (int j = n - 1; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = b[i];
        }
        cout << c << endl;
    }
}