#include <bits/stdc++.h>
using namespace std;

class MyStack{
    private:
        int* storage;
        int capacity, size;
    public:
        MyStack(int capacity){
            this->capacity = capacity;
            this->size = 0;
            this->storage = new int[capacity];
        }
        void push(int data){
            if(size>=capacity){
                throw "StackOverflow Error";
            }
            this->storage[this->size++] = data;
        }
        int pop(){
            if(size<=0){
                throw "StackUnderflow Error";
            }
            return this->storage[--this->size];
        }
        int peek(){
            if(this->isEmpty()){
                throw "StackUnderflow Error";
            }
            return this->storage[this->size-1];
        }
        bool isEmpty(){
            return this->size==0;
        }
};

class QueueFromStacks{
    private:
        MyStack *s1, *s2;
        int size = -1, capacity;
    public:
        QueueFromStacks(int capacity){
            this->s1 = new MyStack(capacity);
            this->s2 = new MyStack(capacity);
            this->capacity = capacity;
        }
        void add(int data){
            if(this->s1->isEmpty()){
                this->s1->push(data);
            }
            else{
                if(this->size >= this->capacity){
                    throw "Overflow";
                }
                while(!this->s1->isEmpty()){
                    this->s2->push(this->s1->pop());
                }
                this->size++;
                this->s1->push(data);
                while(!this->s2->isEmpty()){
                    this->s1->push(this->s2->pop());
                }
            }
        }
        int remove(){
            if(this->s1->isEmpty())
                throw "Underflow";
            this->size--;
            return this->s1->pop();
        }
        int peek(){
            if(this->s1->isEmpty())
                throw "Underflow";
            return this->s1->peek();
        }
        bool isEmpty(){
            return this->s1->isEmpty() && this->s2->isEmpty();
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    QueueFromStacks st(3);
    st.add(1);
    st.add(2);
    st.add(3);
    cout << st.isEmpty();
    cout << st.remove();
    cout << st.peek();
    cout << st.remove();
    cout << st.remove();
    cout << st.isEmpty();
    return 0;
}