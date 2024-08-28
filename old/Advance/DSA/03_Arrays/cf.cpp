// #include <bits/stdc++.h>
// using namespace std;
// // bits
// // test
// // inarr
// // outarr
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         long long min = 10, max = 18;
//         bool print = false;
//         for (int i = 2; i < 20; i++)
//         {
//             cout << " MIN  " << min << "   " << " MAX = " << max << endl;
//             if (n >= min && n <= max)
//             {

//                 // check krta hun numbers;
//                 // last digit soul not be 9
//                 n = n % 10;
//                 if (n == 9)
//                 {
//                     print = false;
//                     break;
//                 }
//                 print = true;
//                 break;
//             }
//             if (n < min)
//             {
//                 cout << "break because min is" << min << endl;
//                 break;
//             }

//             // check
//             min += pow(10, i);
//             max += 18 * pow(10, i - 1);
//         }
//         if (print)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//         // }
//         // long long min = 10;
//         // long long max = 18;
//         // bool print = false;
//         // int digit = 1;
//         // while (n > max)
//         // {
//         //     digit++;
//         //     max += 18 * pow(10, digit - 1);
//         //     min += pow(10, digit);
//         // }
//         // int localmaxima, localminima;
//         // if (n < min)
//         // {
//         //     cout << "NO" << endl;
//         // }
//         // else
//         // {
//         //     for (int a = min; a <= max; a = a + 10)
//         //     {
//         //         localminima = a;
//         //         localmaxima = a + 4;
//         //         if(n >= localminima && n <= localmaxima){
//         //               cout << "YES" << endl;
//         //               break;
//         //         }
//         //         if(n < localminima){
//         //            cout << "NO" << endl;
//         //            break;
//         //         }
//         // }
//     }
// }
#include <iostream>
#include <string>
using namespace std;

bool can_be_sum_of_two_large_numbers(long long x)
{
    string str_x = to_string(x);
    for (char c : str_x)
    {
        int digit = c - '0';
        if (digit < 10)
        { // Any digit less than 10 cannot be the sum of two large digits
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        if (can_be_sum_of_two_large_numbers(x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
