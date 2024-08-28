#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int same = true;
    for (int i = 1; i < n; i++)
    {
      if (arr[i] != arr[i - 1])
      {
        same = false;
        break;
      }
    }
    if (same)
    {
      cout << "-1" << endl;
    }
    else
    {
      int maxi = arr[0];

      for (int i = 1; i < n; i++)
      {
        if (arr[i] > maxi)
        {
          maxi = arr[i];
        }
      }
      int c = 0;
      for (int i = 0; i < n; i++)
      {
        if (arr[i] == maxi)
        {
          c++;
        }
      }
      cout << n - c << " " << c << endl;
      for (int i = 0; i < n; i++)
      {
        if (arr[i] != maxi)
        {
          cout << arr[i] << " ";
        }
      }
      cout << endl;
      while (c--)
      {
        cout << maxi << " ";
      }
      cout << endl;
    }
  }
}