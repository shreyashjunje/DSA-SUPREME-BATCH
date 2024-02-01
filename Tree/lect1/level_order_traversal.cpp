#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* BuildTree(){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    //step 1:  create a root node;
    Node* Root = new Node(data);

    // step 2: left node by recursion
    cout<<"enter data for left part "<<data<<" node"<<endl;
    Root->left=BuildTree();

    // step 3:  right node using recursion 
    cout<<"enter data for right part "<<data<<" node"<<endl;
    Root->right=BuildTree();

    return Root;

}

void levelOrderTraversal(Node* Root){
    //creation of queue 
    queue<Node*>q;

    q.push(Root);


    while(!q.empty()){
         //A
    Node* temp=q.front();

    //B
    q.pop();

    //C
    cout<<temp->data<<" ";

    //D
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }

    }

   

}


void diffLevelOrderTraversal(Node* Root){
    //creation of queue 
    queue<Node*>q;

    q.push(Root);
    q.push(NULL);


    while(!q.empty()){
         //A
    Node* temp=q.front();

    //B
    q.pop();

    if(temp==NULL){
        cout<< endl;
        
        if(!q.empty()){
            q.push(NULL);
        }
    }
    
    else{
     
    //C
    cout<<temp->data<<" ";

    //D
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }

    }
    }

   

}

int main(){

    Node* Root=NULL;

    Root=BuildTree();

    levelOrderTraversal(Root);
    cout<<endl;
    diffLevelOrderTraversal(Root);

}