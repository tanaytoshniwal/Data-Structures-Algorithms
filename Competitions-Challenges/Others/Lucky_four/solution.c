#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while(t--){
    char c[100];
    scanf("%s", c);
    int cnt=0,i;
    for(i=0;c[i]!='\0';i++)
      if(c[i] == '4')
        cnt++;
   	printf("%d\n", cnt);
  }
	return 0;
}