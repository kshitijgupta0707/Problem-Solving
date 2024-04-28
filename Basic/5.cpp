#include <iostream>
using namespace std;
pair<int, int> searchh(int matrix[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                return {i, j};
            }
        }
    }
    return {0, 0};
}
int main()
{
    int matrix[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int count = 0;
    pair<int, int> p = searchh(matrix);
    int i = p.first;
    int j = p.second;
    while (matrix[2][2] != 1)
    {

        if (i > 2)
        {
            matrix[i - 1][j] = matrix[i][j];
            matrix[i][j] = 0;
            i = i - 1;
            count++;
        }
        if (j > 2)
        {
            matrix[i][j - 1] = 1;
            matrix[i][j] = 0;
            j = j - 1;
            count++;
        }
        if (i < 2)
        {
            matrix[i + 1][j] = 1;
            matrix[i][j] = 0;
            i = i + 1;
            count++;
        }
        if (j < 2)
        {
            matrix[i][j + 1] = 1;
            matrix[i][j] = 0;
            j = j + 1;
            count++;
        }
    }

    cout << count;
}
  