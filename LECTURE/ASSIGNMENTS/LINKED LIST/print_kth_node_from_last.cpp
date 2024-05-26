#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while( temp!= NULL ){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int getlength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}


// void printKthNodefromlast(Node* &head,int k){
//     int length=getlength(head);
//     int printNode=length-k-1;
//     int i=0;
//     Node* temp=head;
//     while(i!=printNode){
//         temp=temp->next;
//         i++;
//     }
//     cout<<temp->data<<endl;;
// }

void solve(Node* &head,int &k,int &ans){
    if(head==NULL){
        return ;
    }
    
    solve(head->next,k,ans);
    
    if(k==0){
        ans=head->data;
    }
    
    k--;
}

int getlength(Node* head,int k){
    int ans=-1;
    solve(head,k,ans);
    return ans;
}


int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* tail=new Node(50);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=tail;

    int k=2;
    cout<<"printing using recursion : ";
    cout<<getlength(head,k)<<endl;
    
    
    cout<<"printing using iterative : ";
    printKthNodefromlast(head,k);
    

   
    return 0;

}