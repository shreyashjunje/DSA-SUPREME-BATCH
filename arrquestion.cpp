#include<iostream>
#include<algorithm>
using namespace std;

bool linearsearch(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}





int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int key,s,e;
    s=0;
    e=size-1;
    // cout<<"enter key to search: ";
    // cin>>key;

//linear search in an array
//    if(linearsearch(arr,size,key)){
//         cout<<"found";
//    }else{
//     cout<<"not found";
//    }
//    cout<<endl;

//extreme print of an array
// while(s<=e){
//     if(s==e){
//         cout<<arr[s];
//     }
//     else{
//         cout<<arr[s]<<" ";
//         cout<<arr[e]<<" ";
//     }
//      s++;
//      e--;
//    }
//    cout<<endl;

   //reverse an array
    while(s<=e){
      swap(arr[s],arr[e]);
        s++;
        e--;

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}












