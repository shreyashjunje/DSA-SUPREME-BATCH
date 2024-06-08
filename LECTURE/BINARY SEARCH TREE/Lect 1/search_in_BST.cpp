// #include<bits/stdc++.h>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int data){
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//         }
// };
// Node* insertIntoBST(Node* root,int data){
//     // Empty tree
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }
//     // Not empty tree
//     if(root->data > data){
//         // insert into left
//         root->left = insertIntoBST(root->left,data);
//     }
//     else{
//         // insert into right
//         root->right = insertIntoBST(root->right,data);
//     }
//     return root;
// }
// void takeInput(Node* &root){
//     int data;
//     cin>>data;
//     while(data != -1){
//         root = insertIntoBST(root,data);
//         cin>>data;
//     }
// }
// // To print the tree level wise
// void levelOrderTraversal(Node *root)
// {
//     // Empty tree
//     if (root == NULL)
//     {
//         return;
//     }
//     queue<Node *> q;
//     // Push the root in queue
//     q.push(root);
//     q.push(NULL);
//     // Run the loop until queue becomes empty
//     while (!q.empty())
//     {
//         // Fetch front node and then pop
//         Node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         {
//             // go to the next line
//             cout << endl;
//             // Marking for next level
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             // left child exists
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             // right child exists
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// bool searchInBST(Node* &root , int target){
//     if(root==NULL){
//         return false;
//     }

//     if(root->data == target){
//         return true;
//     }

//     if(root->data > target){
//         return searchInBST(root->left, target);
//     }
//     else{
//         return searchInBST(root->right,target);
//     }
// }

// int findMin(Node* &root , int& min){
//     if(root==NULL){
//         return min;
//     }
//     if(root->data<=min){
//         min=root->data;
//         return findMin(root->left,min);
//     }

// }
// int main(){
//     Node* root = NULL;
//     cout<<"Enter the data for Node"<<endl;
//     takeInput(root);
//     levelOrderTraversal(root);
//     cout<<endl;

//     // bool ans=searchInBST(root,15);
//     // cout<<"present or not : "<<ans<<endl;

//     int min=INT_MAX;
//     cout<<findMin(root,min);
//     return 0;
// }