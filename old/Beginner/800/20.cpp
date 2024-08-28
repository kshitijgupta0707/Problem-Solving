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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int positive = 0, negative = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {

                positive++;
            }
            else
            {

                negative++;
            }
        }
        if (positive >= negative)
        {
            if (negative % 2 == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        else{
            int c = 0;
            while(!(negative <= positive)){
                c++;
                negative--;
                positive++;
            }
            if(negative %2 == 1){
                c++;
            }
         cout << c << endl;
        }
    }
}