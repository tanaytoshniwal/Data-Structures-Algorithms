#include<bits/stdc++.h>
using namespace std;
typedef struct job job;
struct job{
    int start, finish, profit;
};
bool compare(job a, job b){
    return a.finish < b.finish;
}
int main(){
    int n;
    cin >> n;
    job* arr = new job[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].start >> arr[i].finish >> arr[i].profit;
    }
    sort(arr, arr+n, compare);
    int *dp = new int[n];
    dp[0] = arr[0].profit;
    for(int i=1;i<n;i++){
        int include = arr[i].profit, index = -1, start = 0, finish = i-1;
        while(start <= finish){
            int mid = (start+finish)/2;
            if(arr[mid].finish <= arr[i].start){
                start = mid + 1;
                index = mid;
            }
            else{
                finish = mid - 1;
            }
        }
        if(index!=-1) include += dp[index];
        dp[i] = max(dp[i-1], include);
    }
    cout << dp[n-1];
    return 0;
}