#include<iostream>
using namespace std;


class stack{
    public:
    int* arr;
    int size;
    int top;

    stack(int size){
        arr=new int[size];
        top=-1;
        this->size=size;


    }

    void push(int data){

        if(size-top > 1){
            //space available hai
            //insert;
            top++;
            arr[top ]=data;

        }else{
            //stack is fulll
            cout<<"stack is full"<<endl;
        }

    }

    void pop(){
        //first check if stack is empth or not
        if(top==-1){
            //stack is empty
            cout<<"underflow condition,we cannot delete element"<<endl;
        }else{
            //stack is not empty

            top--;
        }

    }
    int getSize(){
        return top+1;
    }
    int getTop(){
        if(top==-1){
            //check stack empty hai ki nahi hai
            cout<<"stack is empty"<<endl;
        }else{
            //stack empty nahi hai
            return arr[top];
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }

};


int main(){

    stack st(10);

    //insertion
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(50);

    cout<<st.getSize();

    while(!st.isempty()){
        cout<<st.getTop()<<" ";
        st.pop();
    }

}