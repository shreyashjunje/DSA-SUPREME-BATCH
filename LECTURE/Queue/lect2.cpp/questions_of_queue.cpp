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

void interleaveQueue(queue<int>&q){
    int i=1 ;
    queue<int>Q;
    int mid=q.size()/2;


    while(i<=mid){
        // cout<<i<<endl;
        
        int element=q.front();
        q.pop();
        Q.push(element);
        i++;
        // cout<<"hi"<<endl;

    }

  

    while(!Q.empty() && !q.empty()){
       
        int start=Q.front();
        
        Q.pop();
        q.push(start);
        
        int element=q.front();
        q.pop();
        q.push(element);

        
    }

    // note: q.size()%2==1 ki jagah q.size()&1; it will check q is oddor even
    if(q.size()&1){
        int element=q.front();
        q.pop();
        q.push(element);
    }

}




int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // q.push(60);
    

    // print(q);
    // reverseQueue(q);


    // reverseByK(q,0);
    interleaveQueue(q);
    print(q);

    
   

}