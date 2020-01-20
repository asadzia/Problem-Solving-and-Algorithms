/*
iven n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
Examples:

Input: arr[]   = {2, 0, 2}
Output: 2
Structure is like below
| |
|_|
We can trap 2 units of water in the middle gap.

Input: arr[]   = {3, 0, 0, 2, 0, 4}
Output: 10
Structure is like below
     |
|    |
|  | |
|__|_| 
We can trap "3*2 units" of water between 3 an 2,
"1 unit" on top of bar 2 and "3 units" between 2 
and 4.  See below diagram also.

Input: arr[] = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
Output: 6
       | 
   |   || |
_|_||_||||||
Trap "1 unit" between first 1 and 2, "4 units" between
first 2 and 3 and "1 unit" between second last 1 and last 2 

*/

// C++ program to find maximum amount of water that can 
// be trapped within given set of bars. 
// Space Complexity : O(1) 
  
#include <iostream> 
using namespace std; 
  
int findWater(int arr[], int n) 
{ 
    // initialize output 
    int result = 0; 
  
    // maximum element on left and right 
    int left_max = 0, right_max = 0; 
  
    // indices to traverse the array 
    int lo = 0, hi = n - 1; 
  
    while (lo <= hi) { 
        if (arr[lo] < arr[hi]) { 
            if (arr[lo] > left_max) 
                // update max in left 
                left_max = arr[lo]; 
            else
                // water on curr element = max - curr 
                result += left_max - arr[lo]; 
            lo++; 
        } 
        else { 
            if (arr[hi] > right_max) 
                // update right maximum 
                right_max = arr[hi]; 
            else
                result += right_max - arr[hi]; 
            hi--; 
        } 
    } 
  
    return result; 
} 
  
int main() 
{ 
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Maximum water that can be accumulated is "
         << findWater(arr, n); 
} 
  
