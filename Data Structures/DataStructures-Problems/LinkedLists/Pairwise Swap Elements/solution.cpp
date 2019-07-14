#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;
void swap(int *a, int *b);
void pairWiseSwap(struct node *head);
  void insert()
{
    int n,i,value;
    struct node *temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("");
}
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,n,value;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     while(t--)
     {
     insert();
     pairWiseSwap(head);
     printList(head);
     }
     return(0);
}
/*This is a function problem.You only need to complete the function given below*/
/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void pairWiseSwap(struct node *head){
    if(head == NULL) return;
    struct node* temp = head;
    while(temp != NULL && temp->next != NULL){
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;
        temp = temp->next->next;
    }
}