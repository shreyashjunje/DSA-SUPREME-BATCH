// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int target){
    
    //base condition 
    if(s.empty()){
        s.push(target);
        return;
    }
    
    int top=s.top();
    s.pop();
    
    insertAtBottom(s,target);
    
    s.push(top);
    
    
}


int main() {
    // Write C++ code here
  stack<int>s;
  
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  
  if(s.empty()){
      cout<<"stack is empty"<<endl;
      return 0;
  }
  
  int target=s.top();
  s.pop();
  
  insertAtBottom(s,target);


  cout<<"printing top at bottom "<<endl;
  while(!s.empty()){
      cout<<s.top()<<" ";
      s.pop();
  }

    return 0;
}