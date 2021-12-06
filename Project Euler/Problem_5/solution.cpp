#include<bits/stdc++.h>
using namespace std;
const int MAXX=20;
bool prime[MAXX];
void seiveOFEratosthanes(){
   memset(prime,true,sizeof(prime));
   prime[0]=false,prime[1]=false;
   for(int i=2;i*i<=MAXX;i++){
       if(prime[i]){
          for(int j=i*i;j<=MAXX;j+=i) prime[j]=false;
       }
   }
}
int solve(){
   seiveOFEratosthanes();
   int arr[MAXX];
   memset(arr,0,sizeof(arr));
   for(int i=2;i<=MAXX;i++)
   {
       if(prime[i]){
           int temp=MAXX;
           while(true)
           {
              temp/=i;
              if(temp==0) break;
              arr[i]++;
           }
       }
   }
   int result=1;
   for(int i=2;i<=MAXX;i++) 
   {
       if(prime[i]){
           for(int j=1;j<=arr[i];j++){
               result*=i;
           }
       }
      
   } 
   return result;   
}
int main()
{
    cout<<"The smallest positive number is = "<<solve()<<endl;
    return 0;
}