#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n;
        long long a = n-1, b =1;
        long long c = 0;
        while(a > b){
          a--;
          b++;
        c++;
        }
        cout << c << endl;
    }
}