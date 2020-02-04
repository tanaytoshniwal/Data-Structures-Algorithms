#include "../linkedlist.h"

Node* partition(Node* head, int x){
    if(head == NULL) return NULL;
    Node *pre = NULL, *precur = NULL, *post = NULL, *postcur = NULL;
    while(head!=NULL){
        Node* next = head->next;
        head->next = NULL;
        if(head->data < x){
            if(pre == NULL){
                pre = head;
                precur = pre;
            }
            else{
                precur->next = head;
                precur = precur->next;
            }
        }
        else{
            if(post == NULL){
                post = head;
                postcur = post;
            }
            else{
                postcur->next = head;
                postcur = postcur->next;
            }
        }
        head = next;
    }
    if(pre == NULL) return post;
    precur->next = post;
    return pre;
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
    int x;
    cin >> x;
    list.head = partition(list.head, x);
    list.print();
    return 0;
}