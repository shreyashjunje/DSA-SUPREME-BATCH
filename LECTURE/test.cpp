#include<iostream>
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

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
int getlength(Node*head){
    int length=0;
    Node* temp=head;
    while(temp!=head){
        temp=temp->next;
        length++;
    }
    return length;
}

Node* deleteNode(Node* head ,int k){

    int length=getlength(head);

    if(k==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return head;
    }

    

    if(k==length){

        // Node* tail=head;
        
        // while(tail!=NULL){
        //     tail=tail->next;
        
        // }
        
        // Node* temp=tail;
        // tail=tail->prev;
        // tail->prev=NULL;
        // tail->next=NULL;
       
        // delete temp;
        // return head;
        Node* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }

        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        }
        temp->prev = nullptr;
        delete temp;
        return head;


    }
    int i=1;
    Node* prevNode=head;

    while(i<k){
        prevNode=prevNode->next;
        i++;
    }

    Node* currNode=prevNode->next;
    Node* nextNode=currNode->next;


    prevNode->next=nextNode;
    nextNode->prev=prevNode;

    currNode->next=NULL;
    currNode->prev=NULL;
    delete currNode;
    return head;

}


Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==k){
           
           head= deleteNode(head,k);
            
            temp=head;
        }else{
         temp=temp->next;

        }
    }
    return head;
}

int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(10);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(10);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    print(head);
    head = deleteAllOccurrences(head,10);
    print(head);
   

}