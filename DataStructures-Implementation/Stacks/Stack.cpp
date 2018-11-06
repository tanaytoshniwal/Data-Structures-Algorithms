#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
class Stack{
    public:
    Node *head, *tail;
    Stack(){
        head = NULL;
        tail = NULL;
    }
    void push(int data){
        Node *temp = new Node();
        temp->data = data;
        if(head == NULL){
            head = temp;
            tail = head;
            return;
        }
        tail->next = temp;
        tail = tail->next;
    }
    void pop(){
        Node *cur, *precur;
        cur = head;
        while(cur != NULL){
            precur = cur;
            cur = cur->next;
        }
        tail = precur;
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
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print();
    s.pop();
    s.print();
    return 0;
}