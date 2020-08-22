#include<iostream>
#include<stdio.h>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
int intersectPoint(struct Node* head1, struct Node* head2);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;
    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }
        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL) return -1;
    int c1 = 0, c2 = 0;
    Node* temp1 = head1, *temp2 = head2;
    while(temp1!=NULL){
        c1++;
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        c2++;
        temp2 = temp2->next;
    }
    int d = abs(c1-c2);
    temp1 = head1;
    temp2 = head2;
    if(c1>c2){
        int c = 0;
        while(temp1!=NULL && c++<d){
            temp1 = temp1->next;
        }
    }
    else if(c2>c1){
        int c = 0;
        while(temp2!=NULL && c++<d){
            temp2 = temp2->next;
        }
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data == temp2->data) return temp1->data;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}