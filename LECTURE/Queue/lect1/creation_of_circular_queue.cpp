#include<bits/stdc++.h>
using namespace std;


class Queue{
    public:
    int size;
    int front;
    int rear;
    int* arr;

    Queue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push(int data){
        if(rear==size && front==0){
            cout<<"queue is full "<<endl;
            return;
        }

        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=data;
            return;
        }
        
        
        else if(rear==size && front!=0){
            rear=0;
            arr[rear]=data;
            return;
        }

        rear++;
        arr[rear]=data;
        
        
    }

    void pop(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
        }else{
            arr[rear]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }

    int getFront(){
        if(front==rear){
            return -1;
        }else{
            return arr[front];  
        }
    }

    int getLength(){
        return rear-front;
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }else{
            return false;
        }
    }
};

int main(){


    // Creation of queue
    Queue q(5);
    // Pushing in queue
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(30);

     cout<<"Size of queue = "<<q.getLength()<<endl;

    q.pop();
    // Checking size of queue
    q.push(89);
    // Removal 
    // q.pop();
    cout<<"Size of queue = "<<q.getLength()<<endl;
    // // Getting front element
    cout<<"Front element = "<<q.getFront();
    // // Checking empty 
    // if(q.isEmpty()){
    //     cout<<"Empty queue"<<endl;
    // }
    // else{
    //     cout<<"Not empty"<<endl;
    // }
    return 0;
}