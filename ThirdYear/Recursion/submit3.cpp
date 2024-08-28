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
       int n , s, m;
       cin >> n >>  s >> m ;
       vector<pair<int ,int>> v;

       while(n--){
         int a , b;
         cin >> a >> b;
         v.push_back({a , b});
       } 
       bool present = false;
       for(int i = 0 ; i < v.size() ; i++){
                
         if(i == 0){
            if(v[i].first >= s){
               present = true;
               break;
            }
         }
         if(i == v.size()-1){
            if(m - v[i].second >= s){
                present = true;
                break;
            }
         }
         if(i != 0){
             if (v[i].first - v[i-1].second >= s){
                present = true;
                break;
             }
         }

       }
       if(present){
         cout << "YES" << endl; 
       }
       else{
        cout << "NO" << endl;
       }
       
      }
    
}