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
   while(t--){
      int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ;i++){
            cin >> arr[i];
        } 
        int even = 0 , odd = 0;
        int largestOdd = 0;
        int secondLargest = 0;
        for(int i = 0 ; i < n ;i++){
            if(arr[i] %2 == 0){
                even ++;
            }
            else {
               largestOdd = max(arr[i] , largestOdd);
               if(arr[i] > secondLargest && arr[i] < largestOdd){
                secondLargest = arr[i];
               }
                odd++;
            }
        } 
        int c = 0;
        for(int i = 0 ; i < n ;i++){
            if(arr[i] %2 == 0){
                if(arr[i] < largestOdd){
                    arr[i] = arr[i] + largestOdd;
                    largestOdd = max(largestOdd , arr[i]);
                    if(arr[i] > largestOdd){
                        largestOdd = arr[i];
                    }
                    if(arr[i] < largestOdd && arr[i] > secondLargest){
                        secondLargest = arr[i];
                    }
                }
            }
        } 

   }   
}