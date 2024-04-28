#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
   
   if( a == b ){
       cout << "Multiples";
   }
   else if(a < b){
    int add = a;
    while( !(a > b)){
        a = a + add;
        if(a == b){
            cout << "Multiples";
            return 0;
        }
    }
    cout << "No Multiples";
    
   }
   else{
       int add = b;
       while (!(a < b))
       {
           b = b + add;
           if (a == b)
           {
               cout << "Multiples";
                return 0;
           }
       }
       cout << "No Multiples";
   }
   
}