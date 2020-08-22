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
Node* reverse(Node* head){
    if(head == NULL) return NULL;
    Node* prev = NULL, *cur = head, *next;
    while(cur!=NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
void print(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
bool check(Node* head){
    if(head == NULL) return false;
    if(head->next == NULL) return true;
    Node* slow = head, *fast = head, *right, *prev_slow, *mid;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }
    if(fast != NULL){
        mid = slow;
        slow = slow->next;
    }
    prev_slow->next = NULL;
    right = reverse(slow);
    while(head != NULL && right != NULL){
        if(head->data != right->data) return false;
        head = head->next;
        right = right->next;
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