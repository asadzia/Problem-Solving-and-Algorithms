/*

You are given an array of 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on right side of the array.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test there will be two lines. The first line contains the size of the array N. The second line contains the N space seperated elements of the array.

Output:
Print the modified array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 ≤ Ai ≤ 1

Example:
Input:
2
5
0 0 1 1 0
4
1 1 1 1

Output:
0 0 0 1 1
1 1 1 1

Explanation:
Testcase 1: All 0s are segregated to left and all 1s to right of the array. So, the modified array is 0 0 0 1 1.

*/

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    
    int n, cases;
    string line;
    stringstream ss;
    
    cin >> cases;
    
    for (int i = 0; i < cases; ++i) {
        cin >> n;
        cin.ignore();
        ss.clear();
        
        string word;
        int one = 0, zero = 0;
        
        getline(cin, line);
        ss << line;
        
        while (ss >> word) {
            if (word == "0") {
                zero++;
            } else {
                one++;
            }
        }
        
        for (int i = 0; i < zero; ++i) {
            cout << "0 ";
        }
        
        for (int i = 0; i < one; ++i) {
            cout << "1 ";
        }
        
        cout << endl;
    }
    
    return 0;
}
