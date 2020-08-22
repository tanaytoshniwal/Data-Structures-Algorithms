#include <bits/stdc++.h>
using namespace std;

/*
 * Type 1: Dogs
 * Type 2: Cats
*/

class Animal {
    private:
        int time, type;
    public:
        Animal(int type, int time){
            this->type = type;
            this->time = time;
        }
        int getTime(){
            return this->time;
        }
};

class AnimalShelter{
    private:
        queue<Animal> *dogs, *cats;
        int timestamp = 0;
    public:
        AnimalShelter(){
            this->dogs = new queue<Animal>();
            this->cats = new queue<Animal>();
        }
        void addAnimal(int type){
            Animal animal(type, this->timestamp++);
            if(type == 1) this->dogs->push(animal);
            else if(type == 2) this->cats->push(animal);
        }
        Animal adoptCat(){
            if(this->cats->empty()){
                throw "No cats available";
            }
            Animal oldest = this->cats->front();
            this->cats->pop();
            return oldest;
        }
        Animal adoptDog(){
            if(this->dogs->empty()){
                throw "No dogs available";
            }
            Animal oldest = this->dogs->front();
            this->dogs->pop();
            return oldest;
        }
        Animal adopt(){
            if(this->cats->empty() && this->dogs->empty()){
                throw "No animals available";
            }
            if(this->cats->front().getTime() > this->dogs->front().getTime()){
                Animal oldest = this->cats->front();
                this->cats->pop();
                return oldest;
            }
            else {
                Animal oldest = this->dogs->front();
                this->dogs->pop();
                return oldest;
            }
        }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}