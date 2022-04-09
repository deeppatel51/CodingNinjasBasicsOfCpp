#include <iostream>

using namespace std;

    //Write your countBits function here
int countBits(int n)
    {
        int bin;
        int count=0;
        while(n!=0)
        {
            bin = n % 2;
            if(bin==1)
            {
                count++;
            }
        n = n/2;
        }
        return count;
    }

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
