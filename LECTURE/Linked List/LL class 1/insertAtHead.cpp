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

void insertAtHead(Node* &head, Node* &tail ,int data){
    //check if no node is present
    if(head==NULL){
        Node* newNode=new Node(data);
        head = newNode;
        tail =  newNode;
        return;
    }
    
    //step 1:create a new node
    Node* newNode= new Node(data);
    //step 2: newNode ke next  ko head ko poiting kr do
    newNode->next=head;
    //step 3: update head
    head=newNode;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    //check if any node present or not
    if(head==NULL){
        Node* newNode=new Node();
        head=newNode;
        tail=newNode;
        return;
    }
    //step1 create a new node
    Node* newNode=new Node(data);
    //step 2;
    tail->next=newNode;
    //step 3'
    tail=newNode;
}
int getlength(Node* &head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;

}

void insertAtPosition(int data ,int position,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;

    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int length=getlength(head);

    if(position>=length){
        insertAtTail(head,tail,data);
        return;
    }

    //step 1
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;

    //step 2;
    Node* newNode=new Node(data);
    // step3 
    newNode->next=curr;
    // step4
    prev->next=newNode;
    
    

}

void print(Node*head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}





int main(){
    int position;
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtPosition(101,2,head,tail);
    print(head);



    
    return 0;
}