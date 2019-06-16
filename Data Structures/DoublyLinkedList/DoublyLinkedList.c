#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node{
    int data;
    Node* next;
    Node* pre;
};

// insert at end of linked list
Node* append(Node* head, int data){
    Node* node = (Node*)malloc(sizeof(struct Node));
    node->data = data;
    if(head==NULL){
        node->next = NULL;
        node->pre = NULL;
        head = node;
        return head;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = node;
    node->pre = temp;
    node->next = NULL;
    return head;
}

// inserting at the start of linked list
Node* push(Node* head, int data){
    Node* node = (Node*)malloc(sizeof(struct Node));
    node->data = data;
    if(head == NULL){
        node->next = NULL;
        node->pre = NULL;
        head = node;
        return head;
    }
    node->next = head;
    node->pre = NULL;
    head->pre = node;
    head = node;
    return head;
}

// inserting at the given position
Node* insert(Node* head, int data, int pos){
    Node* node = (Node*)malloc(sizeof(struct Node));
    node->data = data;
    if(head == NULL){
        return NULL;
    }
    Node *cur = head;
    while(cur->next != NULL && --pos>0){
        cur = cur->next;
    }
    Node* pre = cur->pre;
    pre->next = node;
    node->pre = pre;
    node->next = cur;
    cur->pre = node;
    return head;
}

void print(Node* head){
    if(head == NULL)
        return;
    Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp= temp->next;
    }
}

int main(){
    Node* head = NULL;
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        head = push(head, t);
    }

    head = insert(head ,69, 3);

    print(head);
    return 0;
}