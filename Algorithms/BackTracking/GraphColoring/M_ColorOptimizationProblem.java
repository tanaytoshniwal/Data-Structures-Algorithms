import java.util.*;
class TestClass {
  static int assignColorToNode(int[] k, int c, int[] x, int n){
    for(int i=0;i<c;i++){
      for(int i=0;i<n;i++){
        x[i]=c+1;
        if(k[i]==1 && x[i]==c+1){
          return -1;
        }
        break;
      }
    }
    return x;
  }
  static int[] colorGraph(int[][] arr, int[] x, int c, int n){
    for(int i=0;i<n;i++){
      x = assignColorToNode(arr[i], c, x, n);
    }
    return x;
  }
  public static void main(String[] args) throws Exception {
    //let there be 3 colors:
    //                  RED=1, GREEN=2, BLUE=3
    //Graph:
    //                  A--------------B
    //                  |              |
    //                  |              |
    //                  |              |
    //                  D--------------C
    int[][] adjacencyMatrix = {{0, 1, 0, 1},
                               {1, 0, 1, 0},
                               {0, 1, 0, 1},
                               {1, 0, 1, 0}};
    int[] x = new int[4];
    x = colorGraph(adjacencyMatrix, x, 3, 4);
  }
}
