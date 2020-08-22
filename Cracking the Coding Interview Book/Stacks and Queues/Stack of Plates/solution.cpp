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

class SetOfStacks{
    private:
        int cap, cur = -1;
        vector<MyStack*> _set;
    public:
        SetOfStacks(int capacity_of_each){
            this->cap = capacity_of_each;
            this->_set.push_back(new MyStack(this->cap));
            this->cur = 0;
        }
        void push(int data) {
            try{
                this->_set[cur]->push(data);
            }
            catch(char const* err){
                this->_set.push_back(new MyStack(this->cap));
                this->cur++;
                this->push(data);
            }
        }
        int pop() {
            if(this->cur == -1){
                throw "Stack Underflow";
            }
            int res = INT_MIN;
            try{
                res = this->_set[cur]->pop();
            }
            catch(char const* err){
                this->_set.erase(this->_set.begin() + this->cur);
                this->cur--;
                res = this->pop();
            }
            return res;
        }
        int popAt(int index){
            if(index > this->cur){
                throw "Invalid Index";
            }
            int res = INT_MIN;
            try{
                res = this->_set[index]->pop();
            }
            catch(char const* err){
                cout << "Error occured while popping at index: " << index << endl;
            }
            return res;
        }
        int peek() {
            int res = INT_MIN;
            try{
                res = this->_set[cur]->peek();
            }
            catch(char const* err){
                res = this->_set[this->cur-1]->peek();
            }
            return res;
        }
        bool isEmpty(){
            return this->cur == -1;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    SetOfStacks my_set(3);
    my_set.push(1);
    my_set.push(2);
    my_set.push(3);
    my_set.push(4);
    my_set.push(5);
    my_set.push(6);
    my_set.push(7);
    my_set.push(8);
    cout << my_set.pop();
    cout << my_set.popAt(1);
    return 0;
}