#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&st,int target){

    if(st.empty()){
        st.push(target);
        return;
    }

    int temp=st.top();
    st.pop();

     insertAtBottom(st,target);

     st.push(temp);
}


int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int target=st.top();
    st.pop();

    insertAtBottom(st,target);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


}