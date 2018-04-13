class NQueens{
  static void print(int[][] arr){
    for(int i=0;i<arr.length;i++){
      for(int j=0;j<arr.length;j++){
        System.out.print(arr[i][j]+" ");
      }
      System.out.println();
    }
  }
  static boolean isSafe(int[][] arr, int x, int y){
    for(int i=0;i<y;i++)
      if(arr[x][i]==1)
        return false;
    for(int i=x, j=y;i>=0 && j>=0;i--, j--)
      if(arr[i][j]==1)
        return false;
    for(int i=x, j=y;i<4 && j>=0;i++, j--)
      if(arr[i][j]==1)
        return false;
    return true;
  }
  static void solve(int[][] arr, int col, int n){
    if(col>=n){
      print(arr);
      System.exit(0);
    }
    else{
      for(int i=0;i<n;i++){
        if(isSafe(arr, i, col)){
          arr[i][col] = 1;
          solve(arr, col+1, n);
          arr[i][col] = 0;
        }
      }
    }
  }
  public static void main(String[] args){
    int[][] arr = {{0, 0, 0, 0},
                   {0, 0, 0, 0},
                   {0, 0, 0, 0},
                   {0, 0, 0, 0}};
    solve(arr, 0, 4);
  }
}
