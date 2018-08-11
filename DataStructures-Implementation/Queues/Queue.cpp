#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};

class Queue{
    public:
    Node *head, *tail;
    Queue(){
        head = NULL;
        tail = NULL;
    }
    void add(int data){
        cout<<"add";
        Node* temp = new Node();
        temp->data = data;
        if(head == NULL){
            head = temp;
        }
        else{
            tail = temp;
            tail = tail->next;
        }
    }
    void print(){
        cout<<"print";
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};

int main(){
    Queue q;
    q.add(1);
    q.add(1);
    q.add(1);
    q.add(1);
    q.print();
    return 0;
}