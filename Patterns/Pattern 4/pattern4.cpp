#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    
    //Enter number of sides
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=i;j<=(n-1);j++){
            cout<<" ";
        }
        for(k=1;k<=(2*i-1);k++){
            if((j+k)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}