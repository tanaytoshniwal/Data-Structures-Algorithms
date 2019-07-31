void printPatt(int n){
    int t = 1;
    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(flag){
                cout << t++ << " ";
            }
            else{
                cout << t+i-j << " ";
            }
        }
        if(!flag)t = t+i+1;
        flag = !flag;
        cout << endl;
    }
}
