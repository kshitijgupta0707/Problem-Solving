#include <iostream>
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    if(a == b) {
        cout << "1";
        return 0;
    }
     int years = 0;
    while(a <= b){
          a = 3 *a;
          b = 2 *b;
          years++;
    }
    cout << years;
}