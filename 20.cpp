// *
// ***
// *****
// *******
// *******
// *****
// ***
// *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 2 * n - 1;
    int c = count / 2;
    int star = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < star; k++)
        {
            cout << "*";
        }

        cout << endl;
        star += 2;
        c--;
    }
}