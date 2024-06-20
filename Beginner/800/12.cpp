#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n ;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i] ;
        }
        vector<int> v;
        if(n == 1)
        cout << "1" << endl << arr[0];
        else {
            v.push_back(arr[0]);
            for(int i = 1; i < n ; i++){
                
                int temp = arr[i] - 1;
                v.push_back(temp);
                v.push_back(arr[i]);
            }
        }
        cout << v.size() << endl;
        for(int i = 0 ; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}