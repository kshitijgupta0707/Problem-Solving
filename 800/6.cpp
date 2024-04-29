#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int c = 0;
        bool flag = true;

        while (flag)
        {
            if (n >= m)
            {
                string temp;
                for (int i = 0; i <= n - m; i++)
                {
                    temp = x.substr(i, m);
                    if (temp == s)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            c++;
            if (c > 7)
            {
                c = 0;
                break;
            }
            x = x + x;
            n = 2 * n;

        }
        cout << c - 1 << endl;
    }
}