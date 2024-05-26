#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

int length(Node* &head){
    int length=0;
    Node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        length++;
    }

    return length;
}

Node* insertAtHead(Node* &head,int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        return head;

    }

    Node* newNode = new Node(data);

    newNode->next=head;

    head->prev=newNode;

    head=newNode;
}

Node* insertAtTail(Node* &head, int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        return head;

    }

    Node* newNode = new Node(data);

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;

    newNode->prev=temp;

}

Node* insertAtPosition(Node* &head, int position, int data){

    int length1= length(head);

    if(head==NULL){
            Node* newNode= new Node(data);
            head=newNode;
            return head;

        }

    if(position==0){
        insertAtHead(head,data);
        return head;
    }

    if(position>=length1){
        insertAtTail(head,data);
        return head;
    }

    Node* newNode= new Node(data);

    int count=0;
    Node* temp=head;
    while(count!=position-1){
        temp=temp->next;
        count++;
    }

    newNode->next=temp->next;

    newNode->prev=temp;

    temp->next=newNode;

    temp->next->prev=newNode;



}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* first=NULL;

    insertAtHead(first,10);
    insertAtHead(first,50);
    insertAtHead(first,100);
    insertAtHead(first,200);
    insertAtTail(first,80);
    insertAtPosition(first,1,2000);

    print(first);
    
}