#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string time = s.substr(0, 8);
    string _hours = time.substr(0,2);
    string mins_secs = time.substr(2);
    stringstream _ss(_hours);
    stringstream ss;
    int hours;
    
    _ss >> hours;
    
    if (s.find("PM") != string::npos)
    {
        if (hours < 12)
        {
            hours += 12;
        }
        ss << hours;
        
        return ss.str() + mins_secs;
    }
    else
    {
        if (hours == 12)
        {
            return "00" + mins_secs;
        }
        else
        {
            ss << hours;
            return "0" + ss.str() + mins_secs;
        }
    }
    return "";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

/*
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

s: a string representing time in  hour format
Input Format

A single string  containing a time in -hour clock format (i.e.:  or ), where  and .

Constraints

All input times are valid
Output Format

Convert and print the given time in -hour format, where .

Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
*/
