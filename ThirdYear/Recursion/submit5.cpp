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
    int a , b;
    cin >> a >> b;
    vector<int> st;
     for(int i = a ; i <= b ; i++){
        st.push_back(i);
     }
     bool zeroFound = false;
     int count = 0;
      if(st[0] < 3){
        st[0] = 0;
        zeroFound = true;

        count = 1;
      }


     for(int i = 0 ; i < st.size(); i++){
        if(zeroFound){

        
           st[i] = round((double)st[i]/ 3);
           count++;
           if(st[i] != 0){
            i--;
           }
        }
        else{
            st[0] = round((double)st[i] / 3);
            count++;
            if (st[0] == 0)
            {
                zeroFound = true;
          }
          st[1] *= 3;

          sort(st.begin() , st.end());

          if(!zeroFound){
            i--;
          }
        }
     }
    //a > 3
     cout << count << endl;
   }   
}