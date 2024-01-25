#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;

    }

    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};


void insertAtHead(Node* &head,Node* &tail,int data){
    // step1:create a new NODE
    Node* newNode=new Node(data);

    //handelling different condition
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    // step 2:connect new node ka next to head
    newNode->next=head;

    // step 3: update head to newNode
    head=newNode;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    // step 1 : create a new Node
    Node* newNode=new Node(data)

     //handelling different condition
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    // step 2: connect tail ka next to new NODE

    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;

    newNode=tail;

}



int main(){

    Node* head=NULL;
    Node* tail=NULL;

    
}