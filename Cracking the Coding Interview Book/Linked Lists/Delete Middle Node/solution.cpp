#include "../linkedlist.h"

void deleteMidNode(Node* head, int mid_node){
    if(head == NULL) return;
    if(head->data == mid_node){
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }
    Node* temp = head->next, *pre = head;
    while(temp!=NULL){
        if(temp->data == mid_node){
            Node* del = temp;
            pre->next = temp->next;
            delete del;
        }
        pre = temp;
        temp = temp->next;
    }
}

int main(){
    LinkedList list;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        list.add(temp);
    }
    int mid_node;
    cin >> mid_node;
    deleteMidNode(list.head, mid_node);
    list.print();
    return 0;
}