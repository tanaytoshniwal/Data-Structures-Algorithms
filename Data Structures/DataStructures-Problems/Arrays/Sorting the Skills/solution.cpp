#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        for(int i=1;i<n;i++){
            if(arr[i]+1 == arr[i-1]){
                swap(arr[i], arr[i-1]);
            }
        }
        bool flag = true;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
        
    }
	return 0;
}
