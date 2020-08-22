#include <bits/stdc++.h>
using namespace std;

typedef struct Node Node;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    public:
    Node *head;
    LinkedList(){
        head = NULL;
    }
    void add(int data){
        Node* node = new Node;
        node->data = data;
        node->next = NULL;
        if(head == NULL){
            head = node;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};