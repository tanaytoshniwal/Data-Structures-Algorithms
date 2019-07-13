#include <bits/stdc++.h>
using namespace std;
typedef struct Node Node;
struct Node{
    int data;
    Node* next;
};
Node* insert(Node* head, int data){
    if(head == NULL){
        head = new Node;
        head->data = data;
        head->next = NULL;
        return head;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* node = new Node;
    node->data = data;
    temp->next = node;
    return head;
}
void print(Node* head){
    if(head == NULL) return;
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* reverse(Node* head){
    if(head == NULL) return NULL;
    Node* prev = NULL, *cur = head, *next;
    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
int main(){
    Node* head = NULL;
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        head = insert(head, t);
    }
    head = reverse(head);
    print(head);
    return 0;
}