import java.util.*;
class TestClass {
  public static int fill(int[][] arr, int row, int[] x, int c, int colors, int n){
    if(c>3)
      return -1;
    for(int i=0;i<n;i++){
      if(arr[row][i]==1){
        if(x[i] == c){
          fill(arr, row, x, ++c, colors, n);
        }
      }
    }
    x[row] = c;
    return x[row];
  }
  public static void main(String[] args) throws Exception {
    //let there be 3 colors:
    //                  RED=1, GREEN=2, BLUE=3
    int[][] adjacencyMatrix = {{0, 1, 1, 0, 1, 1},
                               {1, 0, 1, 1, 0, 1},
                               {1, 1, 0, 1, 1, 0},
                               {0, 1, 1, 0, 1, 1},
                               {1, 0, 1, 1, 0, 1},
                               {1, 1, 0, 1, 1, 0}};
    int[] x = new int[adjacencyMatrix.length];
    int[] c = {1, 2, 3};
    Arrays.fill(x, -1);
    for(int i=0;i<x.length;i++){
      x[i] = fill(adjacencyMatrix, i, x, c[0], 3, adjacencyMatrix.length);
    }
    for(int i=0;i<x.length;i++){
      System.out.println("x["+i+"] = "+x[i]);
    }
  }
}
