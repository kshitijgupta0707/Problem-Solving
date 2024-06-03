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
        int n, r;
        cin >> n >> r;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a[7];
        for (int i = 0; i < 7; i++)
        {
            a[i] = 0;
        }
        for(int i = 0; i < n ; i++){
            int c = arr[i] - 65;
            a[c]++;

        }

        int c = 0;
        for(int i = 0 ; i < 7 ; i++){
             if(a[i] < r){
                c = c + r - a[i];
             }
        }
        cout << c << endl;
    }
}