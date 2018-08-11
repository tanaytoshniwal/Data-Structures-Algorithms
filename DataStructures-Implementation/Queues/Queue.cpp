#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};

class Queue{
    public:
    Node* head, tail;
    Queue(){

    }
};

int main(){
    Queue q;
    return 0;
}