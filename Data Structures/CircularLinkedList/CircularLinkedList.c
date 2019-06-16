#include <stdio.h>
#include <stdlib.h>
// defining the node structure for linked list
typedef struct Node Node;
struct Node{
    int data;
    Node* next;
};

// inserting at the end of linked list
Node* append(Node* head, int data){
    Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->data = data;
    if(head == NULL){
        node->next = node;
        head = node;
        return head;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;
    return head;
}

// printing the linked list
void print(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
}

int main(){
    Node *head = NULL;
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        head = append(head, t);
    }

    // head = insert(head, 69, 3);

    print(head);
    return 0;
}