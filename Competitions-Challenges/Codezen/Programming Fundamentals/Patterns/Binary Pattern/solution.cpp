
void printPatt(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << (i%2==0)?1:0;
        }
        cout << "\n";
    }
}
