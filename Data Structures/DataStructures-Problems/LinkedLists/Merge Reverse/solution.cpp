/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/

Node<int>* rev(Node<int>* head1, Node<int>* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
	if(head1->data > head2->data){
        head1->next = rev(head1->next, head2);
        return head1;
    }
    else{
        head2->next = rev(head1, head2->next);
        return head2;
    }
}
Node<int>* merge_reverse(Node<int>* head1,Node<int>* head2) {
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
	Node<int>* pre = NULL;
    Node<int>* cur = head1;
    Node<int>* next;
    while(cur!=NULL){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    head1 = pre;
    pre = NULL, cur = head2;
    while(cur!=NULL){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    head2 = pre;
    return rev(head1, head2);
}
