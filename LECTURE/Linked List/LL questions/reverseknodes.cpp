#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


int getlength(Node* head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;

}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reversekNodes(Node* &head,int k){
    //agar linkes list empty ho to
    if(head==NULL){
        cout<<"linked list is empty"<<endl;
        return head;
    }

    int length=getlength(head);

   

    //yaha tk pohache means length>=k
    Node* prev=NULL;
    Node* curr=head;
    Node* nextNode=curr->next;
    

    int count=0;

     if(k>length){
        cout<<" enter valid length"<<endl;
        return head;
    }else{

        while(count<k){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        count++;
    }

    }
    
    
    if(nextNode!=NULL){
        head->next=reversekNodes(nextNode,k);
    }

    return prev;

    
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seventh=new Node(70);
    Node* eight=new Node(80);
    

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;

    print(head);
    cout<<endl;
    head=reversekNodes(head,3);
    print(head);   

}