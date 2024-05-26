#include<bits/stdc++.h>
using namespace std;


void findMiddle(stack<int>&st,int &size){

    

    if(st.empty()){
        cout<<"stack is full";
        return;
        // return;
    }

    

    if(st.size()==size/2+1){
        cout<<st.top()<<endl;
        return ;
    }

    int target=st.top();
    st.pop();


    findMiddle(st,size);

    // if you dont want to pop the element from stack
    
    st.push(target);
    
}


int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // cout<<st.size();
    int size=st.size();

    
    
    findMiddle(st,size);

    cout<<st.size()<<endl;
}
