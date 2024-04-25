#include<iostream>
#include <iomanip>
using namespace std;
int main(){
 
 double R;
 cin >> R;
 double area = 3.141592653 * R * R;
 cout << setprecision(11) << area;
}