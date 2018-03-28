#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  scanf("%d",&n);
  long long int arr[n];
  map <int,int> list;
  map <int,int> :: iterator itr;
  for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
    itr=list.find(arr[i]);
    if(itr!=list.end()){
      int a=itr->second;
      list.erase(arr[i]);
      list.insert(pair <int,int> (arr[i], ++a));
    }
    else
      list.insert(pair <int,int> (arr[i], 0));
  }
  long long int arr1[n+1]={0}, arr2[n+1]={0};
  for(int i=0;i<n;i++){
    itr=list.find(arr[i]);
    int k=itr->second;
    if(arr2[k]==0)
      arr2[k]=arr[i];
    while(k>=0&&arr1[k]==0){
      arr1[k]=arr[i];
      k--;
    }
  }
  int q;
  scanf("%d",&q);
  while(q-->0){
    int b;long long int t;
    scanf("%d %lld", &b, &t);
    if(t>n)
      printf("0\n");
    else if(b)
      printf("%lld\n", arr2[(int)t]);
    else
      printf("%lld\n", arr1[(int)t]);
  }
  return 0;
}
