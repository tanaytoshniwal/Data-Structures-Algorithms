#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin >> n >> h;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int cmd, ind = 0, crane = 0;
    cin >> cmd;
    while(cmd != 0){
        switch (cmd){
            case 1:
                if(ind>0) ind--;
                break;
            case 2:
                if(ind<n-1) ind++;
                break;
            case 3:
                if(crane == 0 && arr[ind] != 0){
                    arr[ind]--;
                    crane++;
                }
                break;
            case 4:
                if(crane != 0 && arr[ind] != h){
                    arr[ind]++;
                    crane--;
                }
                break;
            case 0:
                break;
        }
        cin >> cmd;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}