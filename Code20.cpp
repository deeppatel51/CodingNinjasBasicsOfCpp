#include <iostream>
using namespace std;

int main()
{
    //Write your code here
bool flag = true;
int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for(int j=n-1; j>=0; j--)
    {
        if(arr[j]==x)
        {
            cout << j;
            flag = false;
            break;
        }
    }
    if(flag==true)
    {
        cout << -1;
    }
    return 0;
}
