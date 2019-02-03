#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[6][6],i,j,k,t=-999999,max;
    for(i = 0; i < 6; i++){
       for(j = 0; j < 6; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
        {
        if(i+2<6&&j+2<6)
            {
            int t2=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(t2>t)
            {t=t2;max=t2;}
        }
    }
    printf("%d",max);
    return 0;
}