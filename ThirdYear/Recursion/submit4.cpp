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
     string a , b;
     cin >> a >> b;
     
     int j = 0;
     string ans = "";
       for(int i = 0 ; i < a.length(); i++){
       
          if(j >= b.length()){
            if(a[i] == '?'){
             ans += "b";
            }
            else{
                ans += a[i];
            }
          }
         else if(a[i] == '?'){
             ans += b[j];
             j++;
         }
         else if(a[i] == b[j]){
            ans += b[j];
            j++;
         }
         else{
            ans += a[i];
         }
       }
      

       if(j == b.length()){
        cout << "YES" << endl;
        cout << ans << endl;
       }
       else{
        cout << "NO" << endl;
       }


   }   
}