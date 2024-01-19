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


    return findMiddle(st,size);

    // st.push(target);
    
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
}
