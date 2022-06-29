//Maximize the number N by inserting given digit at any position
/*
Given a positive integer N and a digit K, 
the task is to find the maximum value of the given number N by 
inserting the given digit K in it N.
*/

//approach
/*
Traverse the string S until K is less than S[i] and append the character S[i] to the string result.
Now append K to the result and then append all the remaining characters of the string to the result.
After completing the above steps, print the string result and the maximum possible number.
*/

#include <bits/stdc++.h>
using namespace std;
void maximize_number(int n, int k){
    string s = to_string(n);
    int len = s.size();
    string res;
    int idx = 0;
    //Iterate till all digits that
    // are not less than K
    while((idx < len) && (k <= s[idx] -'0')){
        res.push_back(s[idx]);
        idx++;
    }
    res.push_back(char(k+'0'));
    //iterate in remaining string
    while(idx < len){
        res.push_back(s[idx]);
        idx++;
    }
    cout<<res<<endl;
}
int main()
{
    int n = 6673;
    int k = 6;
    maximize_number(n,k);
    return 0;
}
