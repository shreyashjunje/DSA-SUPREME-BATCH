#include<bits/stdc++.h>
using namespace std;


void reverseQueue(queue<int>&q){
    if(q.empty()){
        return;
    }

    int element=q.front();
    q.pop();

    reverseQueue(q);

    q.push(element);
}

void reverseByK(queue<int>&q,int k){
    stack<int>st;
   
    int i=1;
    while(i<=k){
        
        int element=q.front();
        q.pop();
        st.push(element);
        i++;
        
    }

    

    while(!st.empty()){
        int element=st.top();
        st.pop();

        q.push(element);
    }

    int j=1;
    while(j<=q.size()-k){
        int num=q.front();
        q.pop();
        j++;

        q.push(num);
    }


}

void print(queue<int>&q){
    while(!q.empty()){
        int element=q.front();
        cout<<element<<" ";
        q.pop();
    }
}




int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // print(q);
    // reverseQueue(q);


    reverseByK(q,0);
    print(q);

    
   

}