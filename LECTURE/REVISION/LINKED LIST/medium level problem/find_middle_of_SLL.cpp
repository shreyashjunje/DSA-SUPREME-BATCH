#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(){
            this->data = 0;
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int find_middle(Node* &head){
    if(head==NULL){
        cout<<"LL is empty";
    }

    if(head->next==NULL){
        return head->data;

    }

    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){

        
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->data;
    
}


int main(){
    // Creation of Nodes of Linked list
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    // Connecting them
    first->next = second;
    second->next = third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    print(first);

    cout<<endl;

    cout<<find_middle(first);
    
    return 0;
}