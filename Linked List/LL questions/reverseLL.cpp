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




void insertNode(int data,int position ,Node* &head,Node* &tail){
    //agara linked list empty ho to 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    if(position==1){
        // step 1; create a new node
        Node* newNode=new Node(data);
        // step 2: new node ka next head ko point kr denge 
        newNode->next=head;
        // step 3: head updat kr denge 
        head=newNode;

        return;
    }

    Node* temp=head;
    int length=0;
    while(temp->next!=NULL){
        temp=temp->next;
        length++;

    }
    if(position ==length){
        // step 1: create a new Node
        Node* newNode=new Node(data);
        // step 2: temp ke next ko new NODE KO point kr denge
        temp->next=newNode;
        // step 3 : tail ko updat lr denge;
        temp=newNode;

        return;
    }

    //at middle 
    int i=1;
    Node* prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;
    }
    Node* currNode=prevNode->next;

    Node* newNode= new Node(data);

    prevNode->next=newNode;

    newNode->next=currNode;

}

Node* reverseusingLoop(Node* head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* newNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newNode;
    }
    return prev;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertNode(10,0,head,tail);
    insertNode(20,0,head,tail);
    insertNode(30,0,head,tail);

    print(head);//
    cout<<endl;
    head=reverseusingLoop(head);
    print(head);

    return 0;

}