ListNode* AddKNodes(ListNode *head, int k) {
    int sum = 0, count = 0;
    ListNode* temp = head;
    while(temp->next != NULL){
        sum += temp->data;
        count++;
        if(count == k){
            ListNode* node = newListNode(sum);
            node->next = temp->next;
            temp->next = node;
            count = 0;
            sum = 0;
            temp = temp->next;
        }
        temp = temp->next;
    }
    if(count != k){
        sum += temp->data;
        ListNode* node = newListNode(sum);
        node->next = NULL;
        temp->next = node;
        temp = temp->next;
    }
    return head;
}