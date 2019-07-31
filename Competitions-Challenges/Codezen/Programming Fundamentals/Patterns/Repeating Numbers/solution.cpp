
void printPatt(int n){
    int t = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<(1<<i);j++){
            cout << t++;
            if(t==10) t=1;
        }
        cout << "\n";
    }
}
