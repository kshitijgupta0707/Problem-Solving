#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int main()
{
    int r, c;
    cin >> r >> c;
    char matrix[r][c];
    int l = 0;
    for (int i = 0; i < r; i++)
    {
        if(i%2==1){
            if(l == c - 1){
                l = 0;
            }else{
                l = c -1;
            }
        }
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0|| l == j)
            {
                cout << "#";
            }
            else
            {
            cout << ".";
            }
        }
        cout << endl;
    }

}