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
bool check(Node* head){
    if(head == NULL) return false;
    if(head->next == NULL) return true;
    stack<Node*> st;
    Node* temp = head;
    while(temp!=NULL){
        st.push(temp);
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        Node* top = st.top();
        st.pop();
        if(temp->data != top->data) return false;
        temp = temp->next;
    }
    return true;
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
    cout << check(head);
    return 0;
}