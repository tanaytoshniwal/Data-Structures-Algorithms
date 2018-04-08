#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    while(m-->0){
        int a,b;
        char c;
        //cin>>a>>b>>c;
        scanf("%d %d", &a, &b);
        scanf(" %c", &c);
        int r=0;
        if(c=='L'){
            for(int i=a;arr[i]!=b;i--, r++){
                if(i==0)
                    i=n;
                if(r>n-1){
                    r=-1;
                    break;
                }
            }
        }
        else{
            for(int i=a;arr[i]!=b;i++, r++){
                if(i==n-1)
                    i=-1;
                if(r>n-1){
                    r=-1;
                    break;
                }
            }
        }
        printf("%d\n", r);
    }
    return 0;
}
