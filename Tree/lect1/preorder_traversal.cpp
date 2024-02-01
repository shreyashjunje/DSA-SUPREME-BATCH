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

void preOrderTraversal(Node* Root){
    if(Root==NULL){
        return;
    }

    cout<<Root->data<<" ";
    preOrderTraversal(Root->left);
    preOrderTraversal(Root->right);
}


int main(){

    Node* Root=NULL;

    Root=BuildTree();
    preOrderTraversal(Root);

}