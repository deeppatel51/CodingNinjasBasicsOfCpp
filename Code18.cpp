#include <iostream>

using namespace std;

//Write your totalPrime function here
int totalPrime(int s, int e)
    {
        int count=0;
        for(int i=s; i<=e; i++)
        {
            bool flag=false;
            for(int j=2; j<i; j++)
            {
                int temp = i%j;
                if (temp==0)
                {
                    flag=true;
                }
            }
            if(flag==false)
            {
                count++;
            }
        }
        return count;
    }

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
