#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
// The structure of the class is
class SortedStack
{
public:
    stack<int> s;
    void sort()
    {
        if (s.empty())
        {
            return;
        }
        int top = s.top();
        s.pop();
        sort();
        
    };
};

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack ::sort()
{
}
int main()
{
}