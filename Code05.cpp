#include <iostream>
using namespace std;

int main() {
    //Write your code here
    char a;
    cin >> a;
if ((64 < a) && (a < 91))
    {
    cout << "1";
    }
    else if ((96 < a) && (a < 123))
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
