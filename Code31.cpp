#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    // Write your code here
    int n = input.length();
    string str1 =" ";
    for(int i=0; i<n; i++)
    {
        if(input[i]!=c)
        {
            str1 = str1 + input[i];
        }
    }
    return str1;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
