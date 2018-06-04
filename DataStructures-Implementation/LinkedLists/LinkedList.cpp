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
	void add(int data) {
        Node *temp = new Node;
        temp->data = data;
        temp->next = NULL;
        if(head == NULL) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
	}
    void add(int data, int index) {
        Node *pre = new Node;
        Node *cur = new Node;
        Node *temp = new Node;
        temp->data = data;
        cur = head;
        for(int i=0;i<index+1;i++){
            pre = cur;
            cur = cur->next;
        }
        pre->next = temp;
        temp->next = cur;
    }
    void addFirst(int data) {
        Node *temp = new Node;
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    void remove(){
        Node *pre = new Node;
        Node *cur = new Node;
        cur = head;
        while(cur->next != NULL){
            pre = cur;
            cur = cur->next;
        }
        pre->next =NULL;
        delete cur;
    }
    void remove(int index) {
        Node *pre = new Node;
        Node *cur = new Node;
        cur = head;
        for (int i = 0; i < index+1; i++) {
            pre = cur;
            cur = cur->next;
        }
        pre->next = cur->next;
        delete cur;
    }
    void removeFirst(){
        Node *first = new Node;
        first = head;
        head = head->next;
        delete first;
    }
    void print() {
        Node *temp = new Node;
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
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
    list.add(10);
    list.addFirst(10);
    list.print();
    list.add(6,6);
    list.print();
    list.remove(6);
    list.remove();
    list.removeFirst();
    list.print();
}
