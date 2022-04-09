#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

void printSubstrings(string input) {
    //Write your code here
    int n = input.length();
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << input.substr(i,j) << endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
