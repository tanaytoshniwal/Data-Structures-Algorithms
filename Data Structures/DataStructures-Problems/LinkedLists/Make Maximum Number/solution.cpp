// Following is the node structure
/**************
class ListNode{
	public:
	int data;
	ListNode* next;
};
 
ListNode* newListNode(int data){
	ListNode *temp = new ListNode;
    	temp->data = data;
    	temp->next = NULL;
    	return temp;
}
***************/
pair<ListNode*, ListNode*> split(ListNode* head){
    ListNode* slow = head, *fast = head->next;
    if(head == NULL || head->next == NULL) return make_pair(slow, fast);
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
    }
    ListNode* temp = slow->next;
    slow->next = NULL;
    return make_pair(head, temp);
}
ListNode* merge(ListNode* left, ListNode* right){
    if(left == NULL) return right;
    if(right == NULL) return left;
    ListNode* node = NULL;
    if(left->data > right->data){
        node = left;
        node->next = merge(left->next, right);
    }
    else{
        node = right;
        node->next = merge(left, right->next);
    }
    return node;
}
void sort(ListNode** node){
    ListNode* head = *node;
    ListNode *left, *right;
    if(head == NULL || head->next == NULL) return;
    pair<ListNode*, ListNode*> nodes = split(head);
    left = nodes.first;
    right = nodes.second;
    sort(&left);
    sort(&right);
    *node = merge(left, right);
}
void FindLargestNum(ListNode *head) {
    sort(&head);
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
    }
}