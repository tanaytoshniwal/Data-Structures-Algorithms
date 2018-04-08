#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,m;
        scanf("%d %d", &n, &m);
        int count[n][26];
        for(int i=0;i<n;i++)
            for(int j=0;j<26;j++)
                count[i][j]=0;
        for(int i=0;i<n;i++){
            string temp;
            cin>>temp;
            for(int j=0;j<m;j++){
                char ch=temp[j];
                count[i][ch-97]++;
            }
        }
        string str;
        cin>>str;
        bool b=true;
        if((n*m)<str.length()) b=false;
        else{
            for(int i=0;i<str.length();i++){
                if(count[i%n][str[i]-97]>0) count[i%n][str[i]-97]--;
                else{
                    b=false;
                    break;
                }
            }
        }
        if(b)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
