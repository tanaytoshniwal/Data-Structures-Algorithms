#include "../linkedlist.h"

int returnKthToLast(LinkedList list, int k){
    if(list.head == NULL) return INT_MIN;
    Node* temp1 = list.head, *temp2 = list.head;
    int ctr = 0;
    while(temp2!=NULL && ctr<k){
        temp2 = temp2->next;
        ctr++;
    }
    while(temp2!=NULL){
        temp2 = temp2->next;
        temp1 = temp1->next;
    }
    return temp1->data;
}

int returnKthToLast2Helper(Node* head, int k, int &counter){
    if(head == NULL) return INT_MIN;
    int res = returnKthToLast2Helper(head->next, k, counter);
    counter++;
    return (counter == k)?head->data:res;
}

int returnKthToLast2(LinkedList list, int k){
    int counter = 0;
    return returnKthToLast2Helper(list.head, k, counter);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    LinkedList list;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        list.add(temp);
    }
    int k;
    cin >> k;
    if(k>n) {
        cout << "K value is greater than the length of linked list";
        throw new exception;
    }
    cout << returnKthToLast(list, k) << endl;
    cout << returnKthToLast2(list, k) << endl;
    return 0;
}