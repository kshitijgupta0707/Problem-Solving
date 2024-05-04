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
        int c = 1;
        for(int i = 1 ; i < n ; i++){
            if(arr[i] >= arr[i-1]){
                c++;
            }else{
                c+=2;
            }
        }
        cout << c << endl;
        cout << arr[0] << " ";
        for (int i = 1; i < n; i++)
        {
    
            if(arr[i] >= arr[i-1]){
                cout << arr[i] << " ";
            }
            else{
                int b = arr[i];
                if(b >= arr[i-1]){
                    b = arr[i-1] - 1;
                }
                cout << b << " " << arr[i] << " ";
            }
        }
        cout << endl;
    }
}