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
        int h, n;
        cin >> h >> n;
        int attacks[n];
        int coolDown[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            attacks[i] = a;
            sum += a;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> coolDown[i];
        }
        int damage = 0, turns = 0;
        if(sum >= health){
            cout << "1" << endl;
            return;
        }
        while (damage < h)
        {
            if(turn == 1){
            damage += sum;
            }else{

            }
        }
    }
}
