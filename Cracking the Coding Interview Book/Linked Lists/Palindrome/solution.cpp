#include "../linkedlist.h"

Node* reverse(Node* node){
    if(node == NULL) return NULL;
    Node* cur = node, *pre = NULL, *next, *temp = node;
    while(temp!=NULL){
        next = temp->next;
        temp->next = pre;
        pre = temp;
        temp = next;
    }
    return pre;
}

bool isPalindrome(Node* head){
    if(head == NULL) return false;
    if(head->next == NULL) return true;
    Node* slow = head, *fast = head, *pre = NULL;
    while(fast != NULL && fast->next != NULL){
        pre = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast != NULL) {
        slow = slow->next;
    }
    slow = reverse(slow);
    pre->next = NULL;
    fast = head;
    while(slow!=NULL && fast!=NULL){
        if(fast->data != slow->data) return false;
        fast = fast->next;
        slow = slow->next;
    }
    return true;
}

bool isPalindrome2(Node* head){
    if(head == NULL) return false;
    if(head->next == NULL) return true;
    stack<int> st;
    Node* temp = head;
    while(temp!=NULL){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(!st.empty()){
        int top = st.top();
        st.pop();
        if(temp->data != top) return false;
        temp = temp->next;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    LinkedList list;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        list.add(temp);
    }
    // cout << isPalindrome(list.head) << endl;
    cout << isPalindrome2(list.head) << endl;
    return 0;
}