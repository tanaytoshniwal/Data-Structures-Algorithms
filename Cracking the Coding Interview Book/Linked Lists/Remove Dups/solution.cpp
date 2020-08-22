#include "../linkedlist.h"

void removeDups(LinkedList list){
    unordered_set<int> lookup;
    if(list.head == NULL) return;
    Node* temp = list.head;
    Node* pre = NULL;
    while(temp != NULL){
        if(lookup.find(temp->data)!=lookup.end()){
            Node * del = temp;
            pre->next = temp->next;
            temp = temp->next;
            delete del;
            continue;
        }
        else{
            lookup.insert(temp->data);
        }
        pre = temp;
        temp = temp->next;
    }
}

void removeDups2(LinkedList list){
    if(list.head == NULL) return;
    Node* cur = list.head;
    while(cur != NULL){
        Node* fast = cur;
        while(fast->next != NULL){
            if(fast->next->data == cur->data){
                Node* del = fast->next;
                fast->next = fast->next->next;
                delete del;
            }
            else{
                fast = fast->next;
            }
        }
        cur = cur->next;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    LinkedList list;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        list.add(t);
    }
    removeDups2(list);
    list.print();
    return 0;
}