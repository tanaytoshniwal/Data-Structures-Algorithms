#include <stdio.h>
void print(int n){
  int i, j, a=1;
  for(i = 0; i < n; i++){
    //dots
    for(j = i + 1; j < n; j++){
      printf(".");
    }
    //stars
    for(j=0;j<a;j++){
      printf("*");
    }
    a+=2;
    //dots
    for(j = i + 1; j < n; j++){
      printf(".");
    }
    printf("\n");
  }
}
int main(){
  int n;
  scanf("%d", &n);
  print(n);
  return 0;
}