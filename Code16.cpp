#include <iostream>

using namespace std;

    //Write your printDivisors function here
int printDivisors(int n)
    {
        for(int i=1; i<=n; i++)
        {
            if((n%i)==0)
            {
                cout << i << " ";
            }
        }
        return 0;
    }

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
