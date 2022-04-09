#include <iostream>
using namespace std;

int main() {
    //Write your code here
int x,n, product = 1;
    cin >> x >> n;
    for (int i=n; n!=0; n--)
    {
        product = product * x;
    }
    cout << product;
    return 0;
}
