#include <bits/stdc++.h>
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

void levelOrderTraversal(Node* root){
    queue<Node*>Q;
    
    Q.push(root);
    
    
    while(!Q.empty()){
        Node* temp=Q.front();
        
        Q.pop();
        
        cout<<temp->data<<" ";
        
        if(temp->left){
            Q.push(temp->left);
        }
        
        if(temp->right){
            Q.push(temp->right);
        }
    }
}

void DifflevelOrderTraversal(Node* root){
    queue<Node*>Q;
    
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        Node* temp=Q.front();
        
        Q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!Q.empty()){
                Q.push(NULL);
            }
        }else{
                cout<<temp->data<<" ";
                
                if(temp->left){
                    Q.push(temp->left);
                }
                
                if(temp->right){
                    Q.push(temp->right);
                }

        }
        
       
        
    }
    
}

int main()
{
    Node *root = NULL;
    root=BuildTree();
    cout<<endl;

    cout<<"printing level order traversal of binary tree : "<<endl;
    levelOrderTraversal(root);

    cout<<endl;

     cout<<"printing level order traversal on diff row of binary tree : "<<endl;
    DifflevelOrderTraversal(root);

}