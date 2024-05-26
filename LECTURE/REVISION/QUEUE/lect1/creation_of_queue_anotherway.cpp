#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int size;
    int* arr;
    int front;
    int rear;

    Queue(int n){
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;

    }

    void push(int data){
        if(rear==size-1){
            cout<<"queue is full"<<endl;
            return;
        }else if(front==-1){
            front++;
           
        }

        rear++;
        arr[rear]=data;
        
    }

    void pop(){
        if(front==-1){
            cout<<"queue is empty"<<endl;
        }else if(front==0 && rear==0){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }else{
            arr[front]=-1;
            front++;
        }
    }

    int getSize(){
        return rear-front+1;
    }

    int getFront(){
        return arr[front];
    }

    bool isEmpty(){
        if(front==-1){
            return true;

        }else{
         return false;
        }
    }

};



int main(){
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    cout<<"size  of queue is : "<<q.getSize()<<endl;
    cout<<"front of queue is : "<<q.getFront()<<endl;

}