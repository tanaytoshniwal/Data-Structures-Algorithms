void printPatt(int n){
    for(int i=0;i<n;i++){
        char c='A';
        for(int j=0;j<i;j++) cout << " ";
        for(int j=0;j<n-i;j++) cout << (char)(c+j);
        for(int j=0;j<n-i;j++) cout << (char)(c+n-i-1-j);
        cout << "\n";
    }
}
