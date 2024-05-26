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

int length(Node* &head){
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;
}

Node *insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return head;
    }

    Node *newNode = new Node(data);

    newNode->next = head;

    head = newNode;
}

Node *insertAtTail(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return head;
    }

    Node *newNode = new Node(data);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}


Node* insertAtPosition(Node* &head, int position, int data){
     if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        return head;
    }

    int length1=length(head);

    if(position==0){
        insertAtHead(head,data);
        return head;
    }

    if(position>=length1-1){
        insertAtTail(head,data);
        return head;
    }

    Node* newNode=new Node(data);

    Node* temp=head;
    int count=0;

    while(count!=position-1){
        temp=temp->next;
        count++;
    }

    newNode->next=temp->next;

    temp->next=newNode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}



int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->next = third;

    // Node* first=NULL;

    print(first);
    // cout<<length(first);
    cout << endl;
    insertAtPosition(first, 1,2000);
    // insertAtTail(first, 3000);

    print(first);
}