#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if ((arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) || (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1))
            {
                int pos = i - 1;
                int a = arr[i];
                int b = arr[i + 1];
                c++;

                arr.erase(arr.begin() + i, arr.begin() + i + 2);
                if (i != 0)
                    arr.insert(arr.begin() + pos + 1, a * b);
                else
                {
                    arr.insert(arr.begin(), a * b);
                }
                i = -1;
            }
        }
        cout << c << endl;
    }
}