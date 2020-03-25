#include <bits/stdc++.h>
using namespace std;

class MyStack{
    private:
    int capacity, size, minimum;
    pair<int, int>* storage;
    public:
    MyStack(int capacity){
        this->capacity = capacity;
        this->size = 0;
        this->storage = new pair<int, int>[capacity];
        this->minimum = INT_MAX;
    }
    void push(int data){
        if(size>=capacity){
            throw "StackOverflow Error";
        }
        this->minimum = min(this->minimum, data);
        this->storage[this->size++] = make_pair(data, this->minimum);
    }
    int getMinimum(){
        return this->storage[this->size-1].second;
    }
    int pop(){
        if(size<=0){
            throw "StackUnderflow Error";
        }
        return this->storage[--this->size].first;
    }
    int peek(){
        if(this->isEmpty()){
            throw "StackUnderflow Error";
        }
        return this->storage[this->size-1].first;
    }
    bool isEmpty(){
        return this->size==0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    MyStack st(5);
    st.push(1);
    st.push(11);
    st.push(-121);
    st.push(1132);
    st.push(112);
    cout << st.getMinimum() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.getMinimum();
    return 0;
}