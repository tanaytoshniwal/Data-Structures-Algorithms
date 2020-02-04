#include "../linkedlist.h"

Node* detectLoop(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(fast == NULL || fast->next == NULL) return NULL;
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}