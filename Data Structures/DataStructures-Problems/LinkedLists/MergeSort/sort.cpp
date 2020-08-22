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
pair<Node*, Node*> split(Node* head){
    Node* slow = head, *fast = head->next;
    if(head == NULL || head->next == NULL) return make_pair(slow, fast);
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
    }
    Node* temp = slow->next;
    slow->next = NULL;
    return make_pair(head, temp);
}
Node* merge(Node* left, Node* right){
    if(left == NULL) return right;
    if(right == NULL) return left;
    Node* node = NULL;
    if(left->data <= right->data){
        node = left;
        node->next = merge(left->next, right);
    }
    else{
        node = right;
        node->next = merge(left, right->next);
    }
    return node;
}
void sort(Node** node){
    Node* head = *node;
    Node *left, *right;
    if(head == NULL || head->next == NULL) return;
    pair<Node*, Node*> nodes = split(head);
    left = nodes.first;
    right = nodes.second;
    sort(&left);
    sort(&right);
    *node = merge(left, right);
}
int main(){
    int n;
    cin >> n;
    Node* head = NULL;
    while(n--){
        int data;
        cin >> data;
        head = insert(head, data);
    }
    sort(&head);
    print(head);
    return 0;
}