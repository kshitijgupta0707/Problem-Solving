#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // find maximum negative no and minimum positive no
    int maxNegative = INT_MIN;
    int minPositive = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "0";
            return 0;
        }
        else if (arr[i] < 0)
        {

            if (arr[i] > maxNegative)
            {
                maxNegative = arr[i];
            }
        }
        else
        {
            if (arr[i] < minPositive)
            {
                minPositive = arr[i];
            }
        }
    }
    maxNegative = 0 - maxNegative;
    if (maxNegative < minPositive)
    {
        cout << maxNegative;
    }
    else
        cout << minPositive;
}
