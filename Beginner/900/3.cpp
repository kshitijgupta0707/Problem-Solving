// #include <bits/stdc++.h>
// using namespace std;
// // bits
// // test
// // inarr
// // outarr
// bool solve(int n, int k, int x, int i, vector<int> &vec, int sum)
// {

//     if (vec.size() == k)
//     {
//         if (x == 0)
//             return true;
//         else
//             return false;
//     }
//     else if (i < 1)
//     {
//         return false;
//     }
//     else if (vec.size() < k && x == 0)
//     {
//         vec.clear();
//         return solve(n - 1, k, sum, n - 1, vec, sum);
//     }
//     else if (x - i >= 0)
//     {
//         vec.push_back(i);
//         return solve(n, k, x - i, i - 1, vec, sum);
//     }
//     else
//     {
//         return solve(n, k, x, i - 1, vec, sum);
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        if (2 * x >= k * (k + 1) && 2 * x <= n * (n + 1) - (n - k) * (n - k + 1))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, x;
//         cin >> n >> k >> x;
//         vector<int> vec;
//         if (solve(n, k, x, n, vec, x))
//         {
//             cout << "Yes" << endl;
//         }
//         else
//         {
//             cout << "No" << endl;
//         }
//     }
// }