#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* height = new int[5000000 + 2]();
    int max_x = 0;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        if(height[x/2] < y){
            height[x/2] = y;
        }
        if(x/2 > max_x) max_x = x/2;
    }
    long area = 0;
    for(int i=max_x;i>0;i--){
        if(height[i] < height[i+1]){
            height[i] = height[i+1];
        }
        area += height[i];
    }
    cout << area * 2;
    return 0;
}