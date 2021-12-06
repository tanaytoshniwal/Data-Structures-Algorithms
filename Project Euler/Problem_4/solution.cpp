#include <bits/stdc++.h>
using namespace std;
#define INF 2000000000
#define printcase(caseno)  printf("Case %d: ",caseno)
typedef long long int ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define debug(x) { cout<< (#x) << " is " << (x) << endl; }
#define getbit(n,i) (((n)&(1<<(i)))!=0)
#define setbit0(n,i) ((n)&(~(1<<(i))))
#define setbit1(n,i) ((n)|(1<<(i)))
#define togglebit(n,i) ((n)^(1<<(i)))
#define lastone(n) ((n)&(-(n)))
#define read freopen("debug\\in.txt","r",stdin)
#define write freopen("debug\\out.txt","w",stdout)
#define fi first
#define se second
#define PI (acos(-1))
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod (1000000007)
#define asz 500005
#define loop(i,a,b) for(int i=a;i<b;i++)
#define t int t;scanf("%d",&t);for(int v=1;v<=t;v++)
#define minheap priority_queue<int,vector<int>,greater<int> >
#define maxheap priority_queue<int>
#define pb push_back
#define newl "\n"
#define error(a,b) abs(b-a)
#define errorLimit 0.00000001
#define forallmap(m) for(auto it=mp.begin();it!=mp.end();it++)
#define forallvec(vc)  for(int i=0;i<vc.size();i++)
#define allvec(vc)    vc.begin(),vc.end()
ll BIGMOD ( ll a, ll p, ll m )
{
    ll result = 1;
    ll x = a;
     
    while ( p )
    {
        if ( p & 1 ) //p is odd
        {
            result = ( result * x ) % m;
        }
        x = ( x * x ) % m;
        p = p >> 1;
    }
 
    return result;
}

bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

void SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 

        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
}
bool palindrome(string str){
   int start=0,end=str.length()-1;
   while(start<=end){
       if(str[start]==str[end]) start++,end--;
       else return false;
   }
   return true; 
}
int solve()
{
    int maxx=-1;
   for(int i=999;i>=100;i--){
       for(int j=999;j>=100;j--){
           int val=i*j;
           if(palindrome(to_string(val))){
               maxx=max(maxx,val);
           }
       }
   }
   return maxx;
}

int main()
{
   //fastread;
     cout<<"Largest palindrome is : "<<solve();
  return 0;
}
