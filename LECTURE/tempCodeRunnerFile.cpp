Node* reverseKnode(Node* first,int k){
//     if(first==NULL){
//         cout<<"linked list is empty";
//         return first;
//     }

//     int length=getlength(first);
//     if(k>length){
//         cout<<"enter valid k";
//         return first;
//     }

//     Node* prev=NULL;
//     Node* curr=first;
//     Node* forward=curr->next;
//     int count=0;

//     while(count<k){
//         forward=forward->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//         count++;
//     }

//     if(forward!=NULL){
//         first->next=reverseKnode(forward,k);
//     }

//     return prev;
// }
