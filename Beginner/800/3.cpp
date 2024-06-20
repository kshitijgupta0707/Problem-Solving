#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;

        //check 3 empty container together
        bool find3emptycontainertogether = false;
        for(int i = 2 ; i < n ; i++ ){

            if (s[i] == '.' && s[i - 1] == '.' && s[i-2] == '.'){
                find3emptycontainertogether = true;
            }
        }
        if(find3emptycontainertogether){
            cout << "2" << endl;
        }
        else{
            int c = 0;
            for(int i = 0 ; i < n ; i++){
                if(s[i] == '.'){
                    c++;
                }
            }
            cout << c <<endl;
        }
    }
}