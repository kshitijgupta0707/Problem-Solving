#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x == 1)
        {
            if (k > x)
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    // 2 se he ho jayga;
                    int size = n / 2;
                    cout << size << endl;
                    while (size--)
                    {
                        cout << "2"
                             << " ";
                    }
                    cout << endl;
                }
                else
                {
                    // dkhna padega
                    vector<int> v;
                    int h = 2;
                    while ( h <= k )
                    {
                        if(n == 0) break;
                        if (n - h >= 0)
                        {
                            n = n - h;
                            v.push_back(h);
                        }
                        else
                        {
                           n = n + h;
                           v.pop_back();
                            h++;
                        }
                    }
                    if (n == 0)
                    {
                        cout << "YES" << endl;
                        cout << v.size() << endl;
                        for (int i = 0; i < v.size(); i++)
                        {
                            cout << v[i] << " ";
                        }
                        cout << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
            cout << n  << endl;
            while(n--){
                cout << "1" << " ";
            }
            cout << endl;
        }
    }
}