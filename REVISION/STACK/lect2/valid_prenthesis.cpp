#include<bits/stdc++.h>
using namespace std;

bool isValid_parenthesis(string str){
    stack<int>st;

    for(int i=0;i<str.length();i++){
        char ch=str[i];

        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }else{
            if(st.empty()){
                return false;
            }else{
                char top=st.top();

                if(ch==')' && top=='(' ){
                    st.pop();
                }else if(ch=='}' && top=='{'){
                    st.pop();
                }else if (ch==']' && top=='['){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

    }

    if(st.empty()){
        return true;
    }else{
        return false;
    }

}


int main(){
    string str="";

    if(isValid_parenthesis(str)){
        cout<<"it is valid parnthesis"<<endl;
    }else{
        cout<<"it is not valid parentesisis"<<endl;
    }
}