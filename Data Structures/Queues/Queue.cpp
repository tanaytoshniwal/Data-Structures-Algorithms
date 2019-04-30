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
    void push(int data){
        Node* temp = new Node();
        temp->data = data;
        if(head == NULL){
            head = temp;
            tail = head;
            return;
        }
        tail->next = temp;
        tail = tail->next;
    }
    int pop(){
        if(head == NULL){
            cout<<"Empty";
            return -1;
        }
        int t = head->data;
        head = head->next;
        return t;
    }
    void print(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.print();
    q.pop();
    q.print();
    return 0;
}