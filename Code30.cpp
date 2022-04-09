#include <iostream>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string reverseEachWord(string input)
{
    // Write your code here
    input.insert(input.end(), ' ');
    int n = input.length();
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(input[i]==' ')
        {
            reverse(input.begin()+j,input.begin()+i);
            j=i+1;
        }
    }
    input.pop_back();
    return input;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}
