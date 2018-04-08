#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    int sum1=0, sum2=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
            if((i+j)%2==0)
                sum1+=arr[i][j];
            else
                sum2+=arr[i][j];
        }
    }
    printf("%d\n%d", sum1, sum2);
    return 0;
}
