void printPatt(int n){
    for(int i=0;i<n;i++){
    	char c = 'A'+n-1;
        for(char t = c-i;t<=c;t++){
            cout << t;
        }
        cout << "\n";
    }
}
