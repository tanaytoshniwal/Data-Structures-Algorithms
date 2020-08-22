#include "../linkedlist.h"

LinkedList add(LinkedList l1, LinkedList l2){
    LinkedList res;
    int carry = 0;
    Node* temp1 = l1.head, *temp2 = l2.head;
    while(temp1!=NULL || temp2!=NULL){
        int sum = carry + ((temp1!=NULL)?temp1->data:0) + ((temp2!=NULL)?temp2->data:0);
        carry = (sum>=10)?1:0;
        sum %= 10;
        res.add(sum);
        if(temp1 != NULL)
            temp1 = temp1->next;
        if(temp2 != NULL)
            temp2 = temp2->next;
    }
    if(carry>0)
        res.add(carry);
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    LinkedList l1, l2;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=s1.length()-1;i>=0;i--){
        l1.add(s1[i]-48);
    }
    for(int i=s2.length()-1;i>=0;i--){
        l2.add(s2[i]-48);
    }
    LinkedList sum = add(l1, l2);
    sum.print();
    return 0;
}