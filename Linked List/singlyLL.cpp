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
    //agar LL empty ho to 
    if(head==NULL){
        Node* newNode = new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    // step 1: create a new Node
    Node* newNode=new Node(data);
    // step 2: attach next pointer to head
    newNode->next=head;
    // step 3: updat head
    head=newNode;

}

void insertAtTail(Node* &head,Node* &tail,int data){
    //agar linked list empty hoga to
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        
        return ;
    }
    // step 1: create a new node;
    Node* newNode=new Node(data);
    // step2: Tail ka next ko new node ko attach kr denge 
    tail->next=newNode;
    // step 3: tail updat kr denge
    tail=newNode;
}


int getlength(Node* head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;

}

void insertAtPosition(int data,int position,Node* &head,Node* tail){
    //agar linked list empty ho to 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==0 || position ==1){
        insertAtHead(head,tail,data);
        return;
    }
    int length=getlength(head);

    if(position>=length){
        insertAtTail(head,tail,data);
        return;
    }

    // step 1: find the prevous and the curr Node
    Node* prev=head;
    int i=1;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;

    // step 2: create a node]
    Node* newNode=new Node(data);
    //step 3: new node ka next ko curr node ko attach karenge
    newNode->next=curr;
    // step 4: pre->nect ko new NODE ko attach kr denge
    prev->next=newNode;
}

void deleteNode(int position,Node* &head,Node* &tail){
    //agar linked list empty hoto 
    if(head==NULL){
        cout<<"linked list is empty"<<endl;
        return;
    }

    if(position ==1){

        // step 1: create a temp node that pointing to head
        Node* temp=head;
        // step 2:  head ko aage lo
        head=head->next;
        // step 3: temp ke next ko null kr do 
        temp->next=NULL;
        //step 4 : te,p delete kr do
        delete temp;

        return;
    }
    int length=getlength(head);

    if(position==length){
        //find the prev node;
        int i=1;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }

        prev->next=NULL;

        Node* temp=tail;

        tail=prev;

        delete temp;

        return;
    }

     int i=1;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        Node* curr=prev->next;

        prev->next=curr->next;

        curr->next=NULL;

        delete curr;

        

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
    // head->next=tail;
    insertAtHead(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtPosition(30,3,head,tail);
    insertAtPosition(25,2,head,tail);
    insertAtPosition(2,2,head,tail);
    print(head);


    cout<<endl;


    deleteNode(1,head,tail);
    deleteNode(4,head,tail);
    deleteNode(2,head,tail);
    print(head);
    

}