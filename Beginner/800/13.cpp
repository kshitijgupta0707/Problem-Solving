#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)

    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c % 2 != 0)
            b--;

        if (a > b)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}