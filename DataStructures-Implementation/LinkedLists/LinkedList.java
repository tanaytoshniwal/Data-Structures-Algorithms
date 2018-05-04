import java.util.Scanner;
class LinkedList{
	static Node start=null;
	static class Node{
		int data;
		Node node;
		Node(int data){
			this.data=data;
			this.node=null;
		}
		boolean hasNext(){
			return (this.node!=null);
		}
	}
	static void printList(){
		Node print=start;
		System.out.println("LinkedList is :");
		while(print.node!=null){
			System.out.print(print.data+" ");
			print=print.node;
		}
		System.out.println(print.data);
	}
	public static void main(String[] args){
		LinkedList list=new LinkedList();
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter 5 elements to add:");
		start=new Node(scan.nextInt());
		Node n1=new Node(scan.nextInt());start.node=n1;
		Node n2=new Node(scan.nextInt());n1.node=n2;
		Node n3=new Node(scan.nextInt());n2.node=n3;
		Node n4=new Node(scan.nextInt());n3.node=n4;
		n4.node=null;
		System.out.print("Printing LinkedList");
		for(int i=0;i<3;i++){
			try{
				Thread.sleep(500);
			}catch(InterruptedException e){
				e.printStackTrace();
			}
			System.out.print(".");
		}
		System.out.println();
		printList();
		System.out.println("end of program");
	}
}
