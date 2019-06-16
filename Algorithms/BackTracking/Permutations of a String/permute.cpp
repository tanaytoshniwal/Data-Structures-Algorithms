#include <bits/stdc++.h>
using namespace std;
string swap(string str, int x, int y){
  char ch = str[x];
  str[x] = str[y];
  str[y] = ch;
  return str;
}
void permute(string str, int x, int y){
  if(x==y)
    cout<<str<<endl;
  else{
    for(int i=x;i<=y;i++){
      str = swap(str, x, i);
      permute(str, x+1, y);
      str = swap(str, x, i);
    }
  }
}
int main(){
  string str = "ABC";
  permute(str, 0, str.length()-1);
  return 0;
}
