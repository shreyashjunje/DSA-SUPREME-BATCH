#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    
    ~Node(){
        cout<<"destructor"<<endl;
    }

};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int  getlength(Node* head){
    int length=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;

}

void insertAtHead(Node* &head,Node* &tail, int data){
    //ll empty ho to 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    //step 1: create a newnode
    Node* newNode=new Node(data);
    //step 2 : newNde ka next head ko attach kar ko
    newNode->next=head;
    //step 3: head->prev ko newnode ko attach kr do
    head->prev=newNode;
    //step 4: head update kr do;
    head=newNode;
}

void insertAtTail(Node* &head,Node* &tail, int data){
     //ll empty ho to 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //step1 :create a new node 
    Node* newNode=new Node(data);
    //step 2: new node ka pev tail ko laga do
    newNode->prev=tail;
    //step 3:  tail ka next newNode ko laga do
    tail->next=newNode;
    //step4: update tail node
    tail=newNode;
}

void insertAtPosition(int data,int position,Node* &head,Node* &tail){
       //ll empty ho to 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=getlength(head);

    if(position>len){
        insertAtTail(head,tail,data);
        return;
    }

    int i=1;
    Node* prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;
    }
    Node* currNode=prevNode->next;

    //step 2: create a new node;
    Node* newNode=new Node(data);
    //step 3: previous node ke next ko newNODE ke prev ko laga diya 
    prevNode->next=newNode;
    //step 4: new node ka prev prevnODE ko laga diaya
    newNode->prev=prevNode;
    //step 5: curr node ka prev newNode ko laga diya 
    currNode->prev=newNode;
    // step 6: new node ka next curr node ko laga diya 
    newNode->next=currNode;
}

void deleteAtHead(int position,Node* &head, Node* &tail){
        //ll empty ho to 
    if(head==NULL){
       cout<<"linked list is empty"<<endl;
        return;
    }
    // step 1: temp node bana do
    Node* temp=head;
    // step 2 :  head update kr do
    head=head->next;
    // step3:head ka prev null kr do
    head->prev=NULL;
    // step 4 : temp->next=NULL//
    temp->next=NULL;
    // step 5: delete temp
    delete temp;

}

void deleteAtTail(int position,Node* &head, Node* &tail){
        //ll empty ho to 
    if(head==NULL){
       cout<<"linked list is empty"<<endl;
        return;
    }
    int len=getlength(head);

    if(position==len){
        
    // step 1: temp node bana do
    Node* temp=tail;
    // step 2: tail ko update kr doo
    tail=tail->prev;
    // step3: tail ke next ko null kr doo
    tail->next=NULL;
    // step4: temp->prev->NULL;
    temp->prev=NULL;
    //step 5 delete temp node
    delete temp;
    }






}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* tail=new Node(30);

    second->next=tail;
    second->prev=head;

    head->next=second;
    tail->prev=second;

    // insertAtHead(head,tail,5);
    // insertAtTail(head,tail,40);
    // insertAtPosition(50,6,head,tail);
    // insertAtPosition(50,0,head,tail);
    // insertAtPosition(101,5,head,tail);
    // deleteAtHead(1,head,tail);
    // deleteAtHead(1,head,tail);
    // deleteAtHead(1,head,tail);
    // deleteAtTail(head,tail);
    deleteAtTail(3,head,tail);
    
    print(head);
    // cout<<getlength(head);
}