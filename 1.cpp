#include<iostream>
using namespace std;
int main()
{
       int t;
       cin >> t;
       while(t--)
       {
             int n;
             cin >> n;
             string s;
             cin >> s;
            //Timur
            bool ans = 1;
             for(int i = 0 ; i < n ; i++){
                 if (n != 5)
                 {
                    ans = 0;
                    break;
                 }
                if (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
                 {
                   continue;
                 }
                 else{
                    ans = 0;
                    break;
                 }
             }
             if(ans == 0){
                cout << "NO" << endl;
             }
             else  cout << "YES" << endl;
       }
}