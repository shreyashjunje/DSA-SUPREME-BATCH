#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTree(){
    int data;
    cout<<"enter the data : ";
    cin>>data;

    if(data==-1){
        return NULL;
    }

    //perform steps A,Band C
    Node* root=new Node(data);

    cout<<"enter the left part of "<<data<< " node"<<endl;
    root->left=BuildTree();

    cout<<"enter the right part of "<<data<<" node"<<endl;
    root->right=BuildTree();

    return root;
}

int main()
{
    Node *root = NULL;
    root=BuildTree();
}