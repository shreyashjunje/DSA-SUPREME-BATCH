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


Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;
   

    while(curr!=NULL){
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
    }
    // return prev;
    return prev;
}
bool isPalindrome(Node* &head){
    if(head==NULL){
        cout<<"linked list empty"<<endl;
        return true;
    }

    if(head->next==NULL){
        return true;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    

    Node* mid=slow->next;
    Node* nextNode=reverse(mid);

    

    Node* temp1=head;
    Node* temp2=nextNode;

   

    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }else{
            temp1=temp1->next;
        temp2=temp2->next;
        }
        
    }


    return true;



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

    if(isPalindrome(first)){
        cout<<"it is a palindrome"<<endl;
    }else{
        cout<<"it is not a palindrome"<<endl;
    }
   
    
    return 0;
}