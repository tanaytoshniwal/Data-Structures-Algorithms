#include <bits/stdc++.h>
using namespace std;
typedef struct Node Node;
typedef long long ll;
struct Node{
    ll data, pos;
    Node* left;
    Node* right;
};
Node* ins(Node* head, ll data, ll pos){
    if(head == NULL){
        Node* node = new Node();
        node->data = data;
        node->pos = pos;
        node->left = node->right = NULL;
        cout << pos << "\n";
        return node;
    }
    if(data < head->data){
        head->left =  ins(head->left, data, 2*pos);
    }
    else {
        head->right = ins(head->right, data, 2*pos+1);
    }
    return head;
}
Node* del(Node* head, ll data){
    if(head == NULL){
        return NULL;
    }
    if(head->data > data){
        head->left = del(head->left, data);
    }
    else if(head->data < data){
        head->right = del(head->right, data);
    }
    else{
        cout << head->pos << "\n";
        if(head->left == NULL){
            Node* temp = head->right;
            delete(head);
            return temp;
        }
        else if(head->right == NULL){
            Node* temp = head->left;
            delete(head);
            return temp;
        }
        Node* temp = head->right;
        while(temp->left) temp = temp->left;
        head->data = temp->data;
        head->right = del(head->right, temp->data);
    }
    return head;
}
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Node* head = NULL;
    ll n;
    cin >> n;
    while(n--){
        char c;
        ll t, pos = 1;
        cin >> c >> t;
        if(c=='i')
            head = ins(head, t, pos);
        else {
            head = del(head, t);
        }
    }
    return 0;
}