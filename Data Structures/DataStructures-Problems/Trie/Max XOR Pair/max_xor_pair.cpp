#include <bits/stdc++.h>
using namespace std;

class trieNode{
    public:
    trieNode* left;
    trieNode* right;
};

void insert(trieNode* head, int n){
    trieNode* temp = head;
    for(int i=31;i>=0;i--){
        int bit = (n>>i)&1;
        if(bit == 0){
            if(!temp->left) temp->left = new trieNode();
            temp = temp->left;
        }
        else{
            if(!temp->right) temp->right = new trieNode();
            temp = temp->right;
        }
    }
}

int findMaxXORPair(trieNode* head, int* arr, int n){
    int max_xor = INT_MIN;
    for(int i=0;i<n;i++){
        trieNode* temp = head;
        int cur_xor = 0;
        for(int j=31;j>=0;j--){
            int bit = (arr[i]>>j)&1;
            if(bit == 0){
                if(temp->right){
                    temp = temp->right;
                    cur_xor += pow(2, j);
                }
                else temp = temp->left;
            }
            else{
                if(temp->left){
                    temp = temp->left;
                    cur_xor += pow(2, j);
                }
                else temp = temp->right;
            }
            max_xor = max(max_xor, cur_xor);
        }
    }
    return max_xor;
}

int main(){
    int arr[5] = {1, 2, 10, 3, 5};
    trieNode* head = new trieNode();
    for(int i=0;i<5;i++){
        insert(head, arr[i]);
    }
    cout << findMaxXORPair(head, arr, 5);
    return 0;
}