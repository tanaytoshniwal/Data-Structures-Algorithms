#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m;
    scanf("%d%d",&n,&m);
    map<int, int> pos;
    int flag=1;
    for(int i=0;i<m;i++){
      int a,b;
      scanf("%d%d",&a,&b);
      if(flag){
        int l=(a<=b)?b-a:n+b-a;
        while(l>=0&&pos.find(a)!=pos.end()){
          int r=pos[a];
          if(r>l){
            pos[a]=l;
            l=r;
          }
          a++;
          l--;
          if(a==n)
            a=0;
        }
        if(l>=0)
          pos[a]=l;
        else
          flag=0;
      }
    }
    flag?printf("YES\n"):printf("NO\n");
  }
  return 0;
}
