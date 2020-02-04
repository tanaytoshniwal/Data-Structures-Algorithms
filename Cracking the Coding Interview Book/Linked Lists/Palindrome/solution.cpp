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

pair<Node*, bool> isPalindrome3Helper(Node* head, int length){
    if(length <= 1){
        return (length == 1)?make_pair(head->next, true):make_pair(head, true);
    }
    auto res = isPalindrome3Helper(head->next, length-2);
    if(!res.second || res.first == NULL) return res;
    res.second = head->data == res.first->data;
    res.first = res.first->next;
    return res;
}

bool isPalindrome3(Node* head, int length){
    auto res = isPalindrome3Helper(head, length);
    return res.second;
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
    // cout << isPalindrome2(list.head) << endl;
    cout << isPalindrome3(list.head, n) << endl;
    return 0;
}