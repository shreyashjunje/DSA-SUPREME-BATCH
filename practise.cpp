#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *first)
{
    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findMiddle(Node* &first)
{
    Node *fast = first;
    Node *slow = first;

    while (fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;    
}

int getlength(Node* first){
    int len=0;
    Node* temp=first;

    while(temp!=NULL){
        
        temp=temp->next;
        len++;
    }

    return len;
}

Node* reverseKnode(Node* first,int k){
    if(first==NULL){
        cout<<"linked list is empty";
        return first;
    }

    int length=getlength(first);
    if(k>length){
        cout<<"enter valid k";
        return first;
    }

    Node* prev=NULL;
    Node* curr=first;
    Node* forward=curr->next;
    int count=0;

    while(count<k){
        forward=forward->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    if(forward!=NULL){
        first->next=reverseKnode(forward,k);
    }

    return prev;
}


int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

   reverseKnode(first,2);
   print(first);
    
}