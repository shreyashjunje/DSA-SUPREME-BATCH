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


Node* buildTree(){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* root=new Node(data);


    cout<<"enter the left part of "<<data<<"node"<<endl;
    root->left=buildTree();

    cout<<"enter the right part of "<<data<<"node"<<endl;
    root->right=buildTree();

    return root;
}


int main(){
    Node* root=NULL;
    root=buildTree();
}