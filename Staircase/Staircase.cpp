/*
Consider a staircase of size :

   #
  ##
 ###
####
Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Input Format

A single integer, , denoting the size of the staircase.

Output Format

Print a staircase of size  using # symbols and spaces.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fun(int i, int j)
{
    if (j == 0)
    {
        return;
    }    
    
    int n = i - j + 1;
    
    while (n > 0)
    {
        cout << "#";
        n--;
    }
    cout << endl;
    fun (i, j - 1);
}


int main(){
    int n;
    cin >> n;
    fun(n, n);
    
    
    return 0;
}
