#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        long long p[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        long long arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        long long bindex = 0;
        long long sindex = 0;
        for (int i = 1; i <= n; i++)
        {
            if (p[i] == pb)
            {
                bindex = i;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (p[i] == ps)
            {
                sindex = i;
            }
        }
        long long b = arr[pb];
        long long s = arr[ps];
        long long sumofb = b;
        long long sumofs = s;
        k--;
        while (k--)
        {
            if (arr[p[p[bindex]]] >= b)
            {
                b = arr[p[p[bindex]]];
                bindex = p[bindex];
            }

            if (arr[p[p[sindex]]] >= s)
            {
                s = arr[p[p[sindex]]];
                sindex = p[sindex];
            }
            sumofb += b;
            sumofs += s;
            if (arr[p[p[bindex]]] == b && arr[p[p[sindex]]] == s)
            {
                break;
            }
        }
        if (sumofb == sumofs)
        {
            cout << "Draw" << endl;
        }
        else if (sumofb > sumofs)
        {
            cout << "Bodya" << endl;
        }
        else
        {
            cout << "Sasha" << endl;
        }
    }
}