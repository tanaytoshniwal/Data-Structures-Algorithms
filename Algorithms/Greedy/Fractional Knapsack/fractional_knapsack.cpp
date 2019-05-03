#include <bits/stdc++.h>
using namespace std;
typedef struct Item Item;
struct Item{
    int value, weight;
};
bool cmp(Item a, Item b){
    double val1 = ((double)a.value)/(a.weight);
    double val2 = ((double)b.value)/(b.weight);
    return val1 > val2;
}
double knapsack(Item arr[], int W, int n){
    sort(arr, arr+n, cmp);
    int curW = 0;
    double finalVal = 0;
    for(int i=0;i<n;i++){
        if(curW+arr[i].weight <= W){
            curW += arr[i].weight;
            finalVal += arr[i].value;
        }
        else{
            int rem = W-curW;
            finalVal += arr[i].value * ((double)rem/arr[i].weight);
            break;
        }
    }
    return finalVal;
}
int main(){
    int W = 70;
    Item arr[] = {{60, 20}, {70, 15}, {80, 40}};
    cout << knapsack(arr, W, 3);
    return 0;
}