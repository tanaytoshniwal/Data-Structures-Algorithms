import java.util.*;
public class EulerCircuit {
	
	Map<String,Integer> map=new HashMap<String,Integer>();
	int counter=0;
	
    void function(int graph[][]) {
		for(int i=0;i<4;i++) {
			for(int j=0;j<4;j++) {
				if(graph[i][j]==1) {
					counter++;
				}
			}
			if(counter%2==0) {
				if(map.containsKey("even")==true) {
					map.put("even" ,map.get("even")+1);
				}
				else {
					map.put("even" ,1);
				}
			}
			else {
				if(map.containsKey("odd")==true) {
					map.put("odd" ,map.get("odd")+1);
				}
				else {
					map.put("odd" ,1);
				}
			}
			counter=0;
		}
		if(map.get("even")==4) {
			System.out.print("Euler circuit exist is the graph");  //all vertex have even degree
		}
		else {
			System.out.print("Euler circuit not exist is the graph");
		}
    }
    public static void main(String[] args) {
        EulerCircuit obj=new EulerCircuit();
        int matrix[][]={{0,1,1,1},{1,0,0,1},{1,0,0,1},{1,1,1,0}};
        obj.function(matrix);
    }
}