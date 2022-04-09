#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    //Write your code here
    int low=0, high=n-1, i=0;
    while(i<=high)
    {
        int temp=0;
        if(arr[i]==0)
        {
            temp=arr[i];
            arr[i]=arr[low];
            arr[low]=temp;
            i++;
            low++;
        }
        else if(arr[i]==2)
        {
            temp=arr[i];
            arr[i]=arr[high];
            arr[high]=temp;
            high--;
        }
        else
        {
            i++;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
