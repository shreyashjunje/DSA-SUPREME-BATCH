#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);
    
    stack<int>st;
    st.push(-1);
    vector<int>ans(arr.size());
    for(int i=arr.size()-1;i>=0;i--){
        int curr=arr[i];

        while(curr<=st.top()){
            st.pop();
        }

        ans[i]=st.top();


        st.push(curr);




    }

    for(int i=0;i<arr.size();i++){
        cout<<ans[i]<<" ";
    }
}