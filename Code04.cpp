#include <iostream>
using namespace std;

int main() {
    //Write your code here
int principal;
    float intrest;
    int time;
    cin >> principal;
    cin >> intrest;
    cin >> time;
    int ans=((principal*intrest*time)/100);
    cout << ans << endl;
    return 0;
}
