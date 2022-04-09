#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    int n = input.length();
    string str2 = "";
    for(int i=0; i<n; i++)
    {
        if(input[i]!=input[i+1])
        {
            str2=str2+input[i];
        }
    }
    return str2;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}
