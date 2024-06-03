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
   while(t--){
      int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ;i++){
            cin >> arr[i];
        } 
        int gcd = INT_MIN;

        int index = -1;

        for(int i = 0 ; i < n - 1;i++){
            int g = __gcd(arr[i],arr[i+1]);
             if(g < gcd){
                index = i;
                break;
             }else{
                gcd = g;
             }
        }



   }   
}