#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int findWinningPlayer(vector<int> &skills, int k)
{
    int n = skills.size();

    int i = 0, c1 = 0, j = 0, c2 = 0;
    while (i < n && j < n)
    {
        if (i == j)
        {
            j++;
        }
        if (skills[i] > skills[j])
        {
            c1++;
            j = i + c1;
            c2 = 0;
        }
        else
        {
            c2++;
            i = j + c2;
            c1 = 0;
        }
        if (c1 == k)
        {
            return c1;
        }
        if (c2 == k)
        {
            return c2;
        }
    }
    if (i == n)
    {
        return j;
    }
    else
    {
        return i;
    }
}
int main(){

}
    // [11, 9, 12, 2, 20, 1, 8] 3--- 4