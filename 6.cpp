#include <iostream>
using namespace std;
bool check(int years)
{
    int digit[4];
    for (int i = 0; i < 4; i++)
    {
        digit[i] = years % 10;
        years = years / 10;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (digit[i] == digit[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int y;
    cin >> y;
    y++;
    int digit[4];
    bool ch = check(y);
    while (!ch)
    {
        y++;
        ch = check(y);
    }
    cout << y;
}
