#include <iostream>
#include <climits>
using namespace std;
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = j = 0;
    k = l;
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++]; 
} 
void sort(int arr[], int l, int r) {
    if (l < r){
        int m = l+(r-l)/2;
        sort(arr, l, m);
        sort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int minAbsoluteDiff(int arr[], int n) {
    sort(arr, 0, n-1);
    int res = INT_MAX;
    for(int i=1;i<n;i++){
        if((arr[i]-arr[i-1]) < res) res = arr[i]-arr[i-1];
    }
    return res;
}
int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	for(int i = 0; i < size; i++)
		cin >> input[i];
	cout<< minAbsoluteDiff(input,size) << endl;
	return 0;
}
