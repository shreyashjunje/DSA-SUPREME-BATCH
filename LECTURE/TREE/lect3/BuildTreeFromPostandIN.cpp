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

Node* BuildTreeFromPOSTandIN(int inorder[],int postorder[] ,int size ,int& postIndex , int inorderStart, int inorderEnd){

    //Base condition
    if(postIndex<0 || inorderStart>inorderEnd){
        return NULL;
    }

    // Step A;
    int element=postorder[postIndex];
    postIndex--;
    Node* root=new Node(element);

    int pos=position(inorder,size,element);

    //recursive call
    root->right=BuildTreeFromPOSTandIN(inorder,postorder,size,postIndex,pos+1,inorderEnd);


    root->left=BuildTreeFromPOSTandIN(inorder,postorder,size,postIndex,inorderStart,pos-1);

    

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
    int postorder[]={40,50,20,60,70,30,10};
    int size=7;
    int postIndex=size-1;
    int inorderStart=0;
    int inorderEnd=size-1;

    Node* root=BuildTreeFromPOSTandIN(inorder,postorder,size,postIndex,inorderStart,inorderEnd);

    levelOrderTraversal(root);




}