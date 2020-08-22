#include <bits/stdc++.h>
using namespace std;
class MultiStack{
    private:
        int capacity, nos, *arr, *stack_size, *start, *top;
    public:
        MultiStack(int number_of_stacks, int capacity) {
            this->capacity = capacity;
            this->arr = new int[capacity * number_of_stacks];
            this->stack_size = new int[number_of_stacks];
            this->start = new int[number_of_stacks];
            this->top = new int[number_of_stacks];
            this->nos = number_of_stacks;
            __init();
        }
        void __init(){
            for(int i=0;i<this->nos;i++){
                this->stack_size[i] = this->capacity;
                this->start[i] = this->top[i] = i * this->capacity;
                this->top[i]--;
            }
        }
        bool isEmpty(int index) {
            index--;
            return this->top[index] == this->start[index]-1;
        }
        int peek(int index){
            index--;
            if(this->isEmpty(index)){
                throw "StackUnderflow Error: "+index;
            }
            return this->arr[this->top[index]];
        }
        int pop(int index){
            index--;
            if(this->top[index] == this->start[index]-1){
                throw "StackUnderflow Error: "+index;
            }
            return this->arr[this->top[index]--];
        }
        void push(int index, int data){
            index--;
            if(this->top[index] == this->stack_size[index]-1 + this->start[index]){
                throw "StackOverflow Error: "+index;
            }
            this->arr[++this->top[index]] = data;
        }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    MultiStack stack(3, 5);
    // first stack
    stack.push(1, 1);
    stack.push(1, 2);
    stack.push(1, 3);
    cout << stack.peek(1) << endl;
    stack.push(1, 4);
    stack.push(1, 5);
    while(!stack.isEmpty(1)){
        cout << stack.pop(1) << " ";
    }
    cout << endl;
    // second stack
    stack.push(2, 6);
    stack.push(2, 7);
    stack.push(2, 8);
    stack.push(2, 9);
    stack.push(2, 10);
    while(!stack.isEmpty(2)){
        cout << stack.pop(2) << " ";
    }
    cout << endl;
    // third stack
    stack.push(3, 11);
    stack.push(3, 12);
    stack.push(3, 13);
    stack.push(3, 14);
    stack.push(3, 15);
    while(!stack.isEmpty(3)){
        cout << stack.pop(3) << " ";
    }
    cout << endl;
    return 0;
}