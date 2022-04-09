#include <iostream>
using namespace std;

int main() {
    //Write your code here
int n, product = 1;
    cin >> n;
    int i=n;
    if(n>=0)
    {
        while (n>0)
        {
            product = product *n;
            n--;
        }
        cout << product;
    }
    else if(n==0)
    {
        cout << 0;
    }
    else
    {
        cout << "Error";
    }
    return 0;
}
