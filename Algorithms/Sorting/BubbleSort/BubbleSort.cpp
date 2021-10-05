#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}




int main()
{
    int n;
    cout<<"Input size of array:";
    cin>>n;
    int arr[n];
    cout<<"Input "<<n<<" values for array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    cout<<"Array Elements are:";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<' ';

    }
    cout<<endl;
    cout<<"Sorted Array is:";
    bubbleSort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<' ';

    }


}
