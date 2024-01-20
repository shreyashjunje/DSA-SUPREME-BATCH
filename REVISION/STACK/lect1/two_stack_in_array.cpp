#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int* arr;
    int top1;
    int top2;

    Stack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }

    void push1(int data){
        if(top2-top1==1){
            cout<<"stack is full"<<endl;
        }else{
            top1++;
            arr[top1]=data;
        }
    }
     void push2(int data){
        if(top2-top1==1){
            cout<<"stack is full"<<endl;
        }else{
            top2--;
            arr[top2]=data;
        }
    }

    bool isEmpty(){
        if(top1==-1 && top2==size){
            return true;
        }else{
            return false;
        }
    }

    void print(){
    for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
   }
}


};



int main(){

    Stack st(5);
    int size=5;

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(10);
    st.push2(10);

    st.print();

   
}