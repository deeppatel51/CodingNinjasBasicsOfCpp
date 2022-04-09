#include <iostream>
#include<algorithm>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k) {
    //Write your code here
    bool flag1=true;
    bool flag2=true;
    int temp=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int m=0;
    for(int i=n-1; i>=0;i--)
    {
        if(arr[i]!=arr[i+1])
        {
            m++;
            if(m==k)
            {
                cout << arr[i] << " ";
                flag2=false;
                break;
            }
        }
    }
    if(flag2==true)
    {
        cout << -1 << " ";
    }
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            l++;
            if(l==k)
            {
                cout << arr[i] << endl;
                flag1=false;
                break;
            }
        }
    }
    if(flag1==true)
    {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}
