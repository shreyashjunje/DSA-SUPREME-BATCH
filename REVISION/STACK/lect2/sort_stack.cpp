#include<bits/stdc++.h>
using namespace std;


void solve(stack<int>&st, int &target){
    if(st.empty()){
        st.push(target);
        return;
    }

    if(st.top()>=target){
        st.push(target);
        return;
    }

    int temp=st.top();
        st.pop();

    solve(st,target);

    st.push(temp);
    
}





void sortStack(stack<int>&st){
    if(st.empty()){
        return;
    }

    int target=st.top();
    st.pop();

    sortStack(st);

    solve(st,target);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(50);
    st.push(5);
    st.push(89);

    sortStack(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}