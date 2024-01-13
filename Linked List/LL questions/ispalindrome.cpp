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

void print(Node* head){
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

bool ispalindrome(Node* &head){
    if(head==NULL || head->next==NULL){
        return true;
    } 

    //find middle
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

    }

    Node* mid=slow->next;
    Node* midNext=reverse(mid);



    

    Node* temp1=head;
    Node* temp2=midNext;

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

Node* removeDuplicate(Node* &head){
    Node* curr=head; 
    

    while(curr!=NULL ){
        if( (curr->next!=NULL) && (curr->data==curr->next->data)){
            curr->next=curr->next->next;
        }else{
             curr=curr->next;
        }
       
    }

    
    
}



int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    // Node* third=new Node(20);
    // Node* fourth=new Node(30);
    // Node* fifth=new Node(30);
    // Node* sixth=new Node(40);
    head->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;


    // removeDuplicate(head);
    print(head);
    
    // cout<<endl;


    bool check=ispalindrome(head);
    cout<<check;

    // print(head);
    // reverse(head);
    // print(head);


    // if(check==1){
    //     cout<<"LL is palindrome"<<endl;
    // }else{
    //     cout<<"LL is not palindrome"<<endl;
    // }

}
