#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long xk, yk;
        cin >> xk >> yk;
        long long xq, yq;
        cin >> xq >> yq;
        vector<pair<long long, long long>> vec;
        vec.push_back({xk + a, yk + b});
        vec.push_back({xk + a, yk - b});
        vec.push_back({xk - a, yk + b});
        vec.push_back({xk - a, yk - b});
        if (a != b)
        {
            vec.push_back({xk + b, yk + a});
            vec.push_back({xk + b, yk - a});
            vec.push_back({xk - b, yk + a});
            vec.push_back({xk - b, yk - a});
        }
        // cout << endl;
        // for (long long i = 0; i < vec.size(); i++)
        // {
        //     pair<long long, long long> p = vec[i];
        //     cout << " { " << p.first << " , " << p.second << " } " << endl;
        // }
        vector<pair<long long, long long>> vec2;

        vec2.push_back({xq + a, yq + b});
        vec2.push_back({xq + a, yq - b});
        vec2.push_back({xq - a, yq + b});
        vec2.push_back({xq - a, yq - b});
        if (a != b)
        {
            vec2.push_back({xq + b, yq + a});
            vec2.push_back({xq + b, yq - a});
            vec2.push_back({xq - b, yq + a});
            vec2.push_back({xq - b, yq - a});
        }
        // cout << endl;
        // for (long long i = 0; i < vec2.size(); i++)
        // {
        //     pair<long long, long long> p = vec2[i];
        //     cout << " { " << p.first << " , " << p.second << " } " << endl;
        // }
        long long count = 0;
        for (long long i = 0; i < vec.size() ; i++)
        {
            for (long long j = 0; j < vec2.size(); j++)
            {
                pair<long long, long long> p = vec[i];
                pair<long long, long long> q = vec2[j];
                if ((p.first == q.first) && (p.second == q.second))
                {
                    // cout << " { " << p.first << " , " << p.second << " } " << endl;
                    // cout << " { " << q.first << " , " << q.second << " } " << endl;
                    count++;
                    break;
                }
            }
        }
  
        cout << count << endl;
    }
} 