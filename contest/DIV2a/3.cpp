
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long count = 0;
        for (long long i = 1; i <= a; i++)
        {
            for (long long j = 1; j <= b; j++)
            {
                long long x = i;
                long long y = j;
                long long sum = x + y;
                long long cal = y * __gcd(x, y);
                // check ki mutilple hain ya ni

                bool multiple = true;
                long long add = cal;
                while (cal != sum)
                {
                    cal = cal + add;
                    if (cal > sum)
                    {
                        multiple = false;
                        break;
                    }
                }
                if (multiple)
                    count++;
            }
        }
        cout << count << endl;
    }
}