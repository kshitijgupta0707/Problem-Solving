#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
string onlyAlphaNumeric (string s){ 
       string ans = "";
    for(int i = 0; i < s.length(); i++){
        int temp = s[i];
        if(s[i] != ' '){
        if (temp >= 'A' && temp <= 'Z')
        {
            temp += 32;
            char a = temp;
            ans += a;
        }
        else if (temp >= 'a' && temp <= 'z'){
            ans += s[i];
        }
        }
    }
    return ans;
}
 bool  solve(string str , int s , int e , int n){
    if(s >= e){
        return true;
    }
    if(s[s] != s[e]){
        return false;
    }
     return solve(s , i+1 , n);
 }
int main()
{
    // string s;
    // cin >> s;
    int a = '1';
    cout << a;

    
}