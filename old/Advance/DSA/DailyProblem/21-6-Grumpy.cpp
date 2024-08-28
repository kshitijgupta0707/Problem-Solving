#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
{
    int start = -1, end = -1;
    int extraSatisfaction = 0;
    int n = customers.size();
    int s = 0, e = minutes - 1;
    while (e < n)
    {
        int usingPower = 0;
        int normalSatisfaction = 0;
        for (int i = s; i <= e; i++)
        {
            if (grumpy[i] == 0)
            {
                normalSatisfaction += customers[i];
            }
            usingPower += customers[i];
        }
        if (usingPower - normalSatisfaction > extraSatisfaction)
        {
            start = s, end = e;
            extraSatisfaction = usingPower - normalSatisfaction;
        }
        s++, e++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i >= start && i <= end) || (grumpy[i] == 0))
        {
            ans += customers[i];
        }
    }
    return ans;
}
