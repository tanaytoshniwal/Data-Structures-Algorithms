#include "../linkedlist.h"

int length(Node* head){
    if(head == NULL) return 0;
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

Node* findIntersection(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL) return NULL;
    int l1 = length(head1), l2 = length(head2);
    Node* temp1 = NULL, *temp2 = NULL;
    if(l1 < l2){
        temp1 = head1;
        head1 = head2;
        head2 = temp1;
    }
    temp1 = head1;
    temp2 = head2;
    int diff = abs(l1-l2);
    while(temp1!=NULL && diff--){
        temp1 = temp1->next;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1 == temp2) return temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return NULL;
}