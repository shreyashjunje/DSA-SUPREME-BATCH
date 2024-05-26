#include<bits/stdc++.h>
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

void insertAtHead(Node* &head,int data){

    //check if ll is empty or not
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        
        return;
    }

    // step1:create a new node 
    Node* newNode=new Node(data);
    
    // step 2: connect new node ka head to the head;
    newNode->next=head;

    // step 3: head ko updat kar do;

    head=newNode;

}

int getLength(Node* &head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;

    }
    return length;

}

void insertAtTail(Node* &head,int data){

    //check if ll is empty or not
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        return;
    }

    // step 1: create a new NODE
    Node* newNode=new Node(data);

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // step 2:connect temp ka nex to the new Node
    temp->next=newNode;
}

void insertAtPosition(int position,int data,Node* &head){
    //check if ll is empty or not 
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        return;
    }

    if(position==0){
        insertAtHead(head,data);
        return;
    }

    int length=getLength(head);

    if(position==length-1){
        insertAtTail(head,data);
        return;
    }

    // step 1:create a new node;
    Node* newNode=new Node(data);

    // step 2: find position of the node;

    int i=0;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
    }
    Node* curr=prev->next;

    // step 3: connect the node
    newNode->next=curr;
    prev->next=newNode;




}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    int position;

    insertAtPosition(0,10,head);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtHead(head,40);

    print(head);

    return 0;
}
