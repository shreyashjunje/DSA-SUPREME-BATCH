#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

int getLength(Node* &head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;
}



void insertion(int position, int data,Node* &head){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        return;
    }

    if(position==1){
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        return;
    }
    int length=getLength(head);

    if(position==length){
        Node* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }

        Node* newNode=new Node(data);

        curr->next=newNode;
        newNode->prev=curr;

        return;

    }
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
    }

    Node* newNode=new Node(data);

    newNode->next=prev->next;
    prev->prev=newNode;
    prev->next=newNode;
    
    
}

void deletion(int position,Node* &head){
    if(head==NULL){
        cout<<"queue is empty"<<endl;
        return;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int length=getLength(head);

    if(position == length){
        int i=1;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }

        Node* curr=prev->next;

        prev->next=NULL;
        curr->prev=NULL;
        delete curr;
        return;

    }

    int i=1;
    Node* prevv=head;
    while(i<position-1){
        prevv=prevv->next;
        i++;
    }
    Node* curr=prevv->next;
    Node* nextt=curr->next;

    prevv->next=nextt;
    nextt->prev=prevv;

    curr->next=NULL;
    curr->prev=NULL;
    delete curr;


    
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
    insertion(1,10,head);
    insertion(1,20,head);
    insertion(1,30,head);
    insertion(2,40,head);
    print(head);
    cout<<endl;
    deletion(3,head);
    print(head);
   

}