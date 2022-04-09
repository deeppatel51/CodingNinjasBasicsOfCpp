#include <iostream>
using namespace std;

int main() {
    //Write your code here
int n;
    int sum1=0, sum2 =0;
    cin >> n;
    while (n!=0)
    {
        int temp = n % 10;
        n = n /10;
        if (temp%2==0)
        {
            sum1=sum1+temp;
        }
        else
        {
            sum2=sum2+temp;
        }
    }
    cout << sum1 << " " << sum2;
    return 0;
}
