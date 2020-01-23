/*

Given N number of square blocks. The height of each square block is 1. The task is to create a  staircase of max height using these blocks.
Note: The first stair would require only one block, the second stair would require two blocks and so on.

Input:
The first line of the input contains T i.e number of test cases. Each line of the test case contains a number  N i.e number of blocks. 

Output:
Each new line of the output contains only one single integer i.e Maximum height of staircase.

Constraints:
1 <= T <= 100
1 <= N <= 108

Example:
Input:
3
10
12
16
Output:
4
4
5

Explanation:
Test Case 1: the max height of the staircase that can be made from  12  blocks is 4. (A staircase of height 4 means sequence of 1,2,3,4 blocks to create a valid staircase.)

*/


#include <iostream>

using namespace std;

int main() {
	
	int n, blocks;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
	    cin.clear();
	    cin >> blocks;
	    int x = 0;
	    int blocks_consumed = 0;
	    int h = 0;
	    
	    while (x + 1 + blocks_consumed <= blocks) {
	        x++;
	        blocks_consumed += x;
	        h++;
	    }
	    
	    cout << h << endl;
	}
	
	return 0;
}
