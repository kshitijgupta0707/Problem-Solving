#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int submit = 0;
        int first[2] = {a, b};
        int second[2] = {c, d};
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                int ans1 = 0;
                int ans2 = 0;

                
                if (first[i] < second[j])
                {
                    ++ans2;
                }
                else if (first[i] > second[j])
                {
                    ++ans1;
                }
                if (first[1 - i] < second[1 - j])
                {
                    ++ans2;
                }
                else if (first[1 - i] > second[1 - j])
                {
                    ++ans1;
                }
                if (ans1 > ans2)
                {
                    ++submit;
                }
            }
        }
        cout <<  submit << endl;
    }

    return 0;
}