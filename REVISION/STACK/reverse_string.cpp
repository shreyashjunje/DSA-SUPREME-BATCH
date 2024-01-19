#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char>st;
    string str="shreyash";

    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}