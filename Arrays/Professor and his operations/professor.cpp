#inclulde <bits/stdc++.h>
using namespace std;
void swap(int arr[], int x, int n){
  int t=arr[x];
  arr[x]=arr[n-x-1];
  arr[n-x-1]=t;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int q;
  cin>>q;
  while(q-->0){
    int x,y;
    cin>>x>>y;
    x--;y--;
    for(int j=x;j<=y;j++)
      swap(arr,j,n);
  }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}
