#include <iostream>
#include <cstring>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int n = sizeof(input1) / sizeof(input1[0]);;
    int temp =n;
    for(int i=0; i<n; i++)
    {
        bool flag = false;
        for(int j=0; j<n; j++)
        {
if(input1[i]==input2[j])
            {
                flag = true;
            }
        }
        if(flag==false)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
