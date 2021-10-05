#include <bits/stdc++.h>
using namespace std;
int searchFirstIndex(int arr[],int item,int n)
{
    int index=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==item)
        {
            return i;
        }
    }
    return index;
}
int searchLastIndex(int arr[],int item,int n)
{
    int index=-1;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==item)
        {
            return i;
        }
    }
    return index;
}
void printAllSearchResults(int arr[],int item,int n)
{
    bool b=false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==item)
        {
            cout<<i<<' ';
            b=true;
        }
    }
    if(!b)
    {
        cout<<"Item not found"<<endl;
    }
}


int main()
{
    int n,item;
    cout<<"Input size of array:";
    cin>>n;
    int arr[n];
    cout<<"Input "<<n<<" values for array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    cout<<"Input item to be searched:";
    cin>>item;
    int firstIndex = searchFirstIndex(arr, item,n);
    int lastIndex = searchLastIndex(arr, item,n);

    if(firstIndex == -1)
        cout<<"Item not found"<<endl;
    else
        cout<<"Item: "<<item<<" found at first index: "<<firstIndex<<endl;

    if(lastIndex == -1)
        cout<<"Item not found"<<endl;
    else
        cout<<"Item: "<<item<<" found at Last index: "<<lastIndex<<endl;

    printAllSearchResults(arr, item,n);

}
