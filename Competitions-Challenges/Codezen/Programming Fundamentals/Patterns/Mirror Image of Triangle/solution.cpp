void printPatt(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++) cout << " ";
        for(int j=0;j<i;j++) cout << i-j;
        cout << 0;
        for(int j=0;j<i;j++) cout << j+1;
        cout << "\n";
    }
}
