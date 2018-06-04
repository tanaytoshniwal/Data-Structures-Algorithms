#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
class LinkedList {
    public:
    Node *head, *tail;
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
	void add(int value) {
        Node *temp = new Node;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
	}
    void print(){
        Node *temp = new Node;
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

};
int main(){
    LinkedList list;
    int n;
    cout<<"Input size: ";
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        list.add(t);
    }
    list.print();
}
