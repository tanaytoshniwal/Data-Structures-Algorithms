#include "../linkedlist.h"

bool detectLoop(Node* head){
    if(head == NULL || head->next == NULL) return false;
    Node* slow = head, *fast = head->next;
    while(fast != NULL && fast->next != NULL){
        if(slow == fast) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}