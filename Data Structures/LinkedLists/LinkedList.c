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
    node->next = NULL;
    if(head == NULL){
        head = node;
        return head;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = node;
    return head;
}

// inserting at the start of linked list
Node* push(Node* head, int data){
    Node* node = (Node*)malloc(sizeof(struct Node));
    node->data = data;
    if(head == NULL){
        node->next = NULL;
        head = node;
        return head;
    }
    node->next = head;
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
    Node* pre = NULL;
    Node *cur = head;
    while(cur->next != NULL && --pos>0){
        pre = cur;
        cur = cur->next;
    }
    pre->next = node;
    node->next = cur;
    return head;
}

// deleting from the beginning 
Node* delete_from_begin(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// deleting from the end
Node* delete_from_end(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node *rem = temp->next;
    temp->next = NULL;
    free(rem);
    return head;
}

// delete from a given position
Node* delete(Node* head, int pos){
    if(head==NULL){
        return NULL;
    }
    Node* temp = head;
    Node* pre;
    while(temp->next!=NULL && --pos>0){
        pre = temp;
        temp=temp->next;
    }
    Node* rem = pre->next;
    pre->next = temp->next;
    free(rem);
    return head;
}

// printing the linked list
void print(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// reversing the linked list
Node* reverse(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* pre = NULL;
    Node *cur = head;
    Node* next = head->next;
    while(cur!=NULL){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    head = pre;
    return head;
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

    head = insert(head, 69, 3);

    head = delete_from_begin(head);
    head = delete_from_end(head);
    head = delete(head, 2);

    head = reverse(head);

    print(head);
    return 0;
}