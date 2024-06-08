#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

int position(int inorder[],int size,int element){
    for(int i=0;i<size;i++){
        if(inorder[i]==element){
            return i;
        }
    }
    return -1;
}

Node* BuildTreeFromINandPRE(int inorder[],int preorder[] ,int size ,int& preIndex , int inorderStart, int inorderEnd){

    //Base condition
    if(preIndex>=size || inorderStart>inorderEnd){
        return NULL;
    }

    // Step A;
    int element=preorder[preIndex++];
    Node* root=new Node(element);

    int pos=position(inorder,size,element);

    //recursive call
    root->left=BuildTreeFromINandPRE(inorder,preorder,size,preIndex,inorderStart,pos-1);

    root->right=BuildTreeFromINandPRE(inorder,preorder,size,preIndex,pos+1,inorderEnd);


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



 
int main(){

    int inorder[]={40,20,50,10,60,30,70};
    int preorder[]={10,20,40,50,30,60,70};
    int size=7;
    int preIndex=0;
    int inorderStart=0;
    int inorderEnd=size-1;

    Node* root=BuildTreeFromINandPRE(inorder,preorder,size,preIndex,inorderStart,inorderEnd);

    levelOrderTraversal(root);




}