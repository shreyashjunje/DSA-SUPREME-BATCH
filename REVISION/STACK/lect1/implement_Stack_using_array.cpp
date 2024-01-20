#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Stack{
    public:
        int top;
        int size;
        int* arr;

    //constructor
    Stack(int size){
        top=-1;
        this->size=size;
        arr=new int[size];
    }

    void push(int data){

        //check stack is full or not 
        if(size-top<=1){
            cout<<"stack overflow condition occur here"<<endl;
        }else{
            top++;
            arr[top]=data;
        }

    }
    
    void pop(){
        //check stack is empty or not 
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
        }
        else{
            top--;
        }
    }


    int getSize(){

        return top+1;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int getTop(){

        return arr[top];

    }


};





int main(){
    Stack st(5);
    
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(!st.isEmpty()){
        cout<<st.getTop()<<endl;
        st.pop();
    }

    cout<<endl;

    if(st.isEmpty()){
        cout<<"true";
    }else{
        cout<<"false";
    }
    

}