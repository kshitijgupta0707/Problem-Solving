#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        char matrix[11][11];
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> matrix[i][j];
            }
        }
        int score = 0;
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                if (matrix[i][j] == 'X')
                {

                    if (j >= i && j <= 11 - i)
                    {
                        score += i;
                    }
                    else
                    {
                        if (j <= 5)
                        {
                            score += j;
                        }
                        else
                        {
                            score += 11 - j;
                        }
                    }
                }
            }
        }
        cout << score << endl;
    }
}