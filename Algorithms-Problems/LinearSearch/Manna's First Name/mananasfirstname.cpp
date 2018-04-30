#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char s1[] = {'S','U','V','O'};
        char s2[] = {'S','U','V','O','J','I','T'};
        char s[150];
        scanf("%s ", s);
        int n1=0, n2=0;
        int l=0, i=0, j=0;
        for(l=0;s[l]!='\0';l++);
        for(i=0;i<l;i++){
            if(s2[j]==s[i]){
                j++;
                if(j==7){
                    j=0;
                    n2++;
                }
            }
        }
        j=0;
        for(i=0;i<l;i++){
            if(s1[j]==s[i]){
                j++;
                if(j==4){
                    j=0;
                    n1++;
                }
            }
        }
        printf("SUVO = %d, SUVOJIT = %d\n", (n1-n2), n2);
    }
    return 0;
}
