/*

Given an array arr[] of N numbers. The task is to print only those numbers whose digits are from set {1,2,3}.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an integer N and the second line contains N space separated array elements.

Output:
For each test case, In new line print the required elements in increasing order. if there is no such element present in the array print "-1".

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= A[i] <= 106

Example:
Input:
3
3
4 6 7
4
1 2 3 4
5
12 111 34 13 55

Output:
-1
1 2 3
12 13 111

Explanation:
Testcase 1: No elements are there in the array which contains digits 1, 2 or 3.

Testcase 2: 1, 2 and 3 are the only elements in the array which conatins digits as 1, 2 or 3.

*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	int n, cases;
	bool flag;
	bool flag2;
	stringstream ss;
	
	cin >> cases;
	
	for (int i = 0; i < cases; ++i) {
	    
	    flag = false;
	    cin >> n;
	    cin.ignore();
	    ss.clear();
	    string line;
	    
	    getline(cin, line);

	    ss << line;
	    string number;
	    
	    while (ss >> number) {
	       
   	        flag2 = false;
	       
	       for (int j = 0; j < number.length(); ++j) {
	           //cout << "hh: " << number[j] << endl;
	            if (number[j] > '3' || number[j] < '1') {
	                flag2 = true;
	                break;
	            }
	       }
	       
	       if (!flag2) {
	           flag = true;
	           cout << number << " ";
	       }
	    }
	    
	    if (!flag) {
	        cout << "-1" << endl;
	    } else {
	        cout << endl;
	    }
	}
	
	return 0;
}
