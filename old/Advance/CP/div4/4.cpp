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
        int r, c;
        cin >> r >> c;
        char matrix[r + 1][c + 1];
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cin >> matrix[i][j];
            }
        }
        bool ans = false;
        int row, col;
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (matrix[i][j] == '#')
                {
                    row = i;
                    col = j;
                    ans = true;
                    break;
                }
            }
            if (ans)
            {
                break;
            }
        }
        int cnt = 0;
        for (int i = row; i <= r; i++)
        {
            if (matrix[i][col] == '#')
            {
                cnt++;
            }
        }
        cnt--;
        cnt = cnt / 2;
        row = row + cnt;
        cout << row << " " << col << endl;
    }
}