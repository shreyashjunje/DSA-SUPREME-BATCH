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
        front=0;
        rear=0;
        arr=new int[n];
    }
    

    void push(int data){
        
        if(rear==size){
            cout<<"queue is full "<<endl;
            // return;
        }else{
            arr[rear]=data;
            rear++;

        }
        
    }

    void pop(){

        if(front==rear){
            cout<<"queue is empty "<<endl;
        }else{
            arr[front]=-1;
            front++;
        }

    }
    int getSize(){

        return rear-front;

    }
    int getFront(){
        return arr[front];
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

    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"size of queue is : "<<q.getSize()<<endl;
    q.pop();
    cout<<"size of queue is : "<<q.getSize()<<endl;
    cout<<"front of queue is : "<<q.getFront()<<endl;
    

    return 0;

}