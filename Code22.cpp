#include <iostream>
using namespace std;

int main() {
    //Write your code here
int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for(int j=k; j<n; j++)
    {
        cout << arr[j] << " ";
    }
    for(int l=0; l<k; l++)
    {
        cout << arr[l] << " ";
    }
    return 0;
}
