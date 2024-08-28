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
        int n, k, q;

        cin >> n >> k >> q;
        int a[k + 1];
        int b[k + 1];
        a[0] = 0;
        for (int i = 1; i < k + 1; i++)
        {
            cin >> a[i];
        }
        b[0] = 0;
        for (int i = 1; i < k + 1; i++)
        {
            cin >> b[i];
        }

        int queries[q];
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }

        for (int m = 0; m < q; m++)
        {
            if (queries[m] == 0)
            {
                cout << "0 ";
                continue;
            }
            int i = 0, j = k;
            int lower, upper;
            while (i < j)
            {
                int mid = i + (j - i) / 2;
                if (queries[m] < a[mid])
                {
                    j = mid - 1;
                    upper = mid;
                    lower = mid - 1;
                }
                else if (queries[m] > a[mid])
                {
                    i = mid + 1;
                    lower = mid;
                    upper = mid + 1;
                }
                else
                {
                    upper = mid;
                    lower = mid - 1;
                    break;
                }
            }

            if (queries[m] == a[upper])
            {
                cout << b[upper] << " ";
                continue;
            }
            int dist = a[upper] - a[lower];
            int time = b[upper] - b[lower];
            float speed = (float)dist / (float)time;
            int distancetobetravelled = queries[m] - a[lower];
            // cout << "speed = " << speed << endl;
            // cout << "distance to b" << distancetobetravelled << endl;
            float timetaken = floor(distancetobetravelled / speed);
            // cout << "time taken " << timetaken << endl;
            // cout << timetaken << endl;
            float timeee = timetaken + b[lower];
            cout << (int)timeee << " ";
        }
        cout << endl;
    }
}