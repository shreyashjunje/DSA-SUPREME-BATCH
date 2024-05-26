#include<iostream>
#include<limits.h>
using namespace std;


// bool findkey(int drr[],int size, int key){
//    for(int i=0;i<size;i++){
//         if(drr[i]==key){
//             return true;
//         }
        
//    }
//    return false;
// }
// int numone=0;
//     int numzero=0;
// int findone(int err[],int size){
//     for(int i=0;i<size;i++){
//         if(err[i]==1){
//             numone++;
//         }
        
//     }
//     cout<<numone;
    

// }
// int findzero(int err[],int size){
//     for(int i=0;i<size;i++){
//         if(err[i]==0){
//             numzero++;
//         }
    
//     }
//    cout<<numzero;
    
// }

int main(){

    int frr[]={2,4,5,8,75,42,5,45,78,100};
    int size=10;
    // int maxNum=INT_MIN;
    // int minNum=INT_MAX;

    int start=0;
    int end=size-1;

    int offset=-1;
   


    for(int i=0;i<size;i++){
        if(frr[i]>=maxNum){
          maxNum=frr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(frr[i]<=minNum){
          minNum=frr[i];
        }
    }
    cout<<"maximum no. in an array is : ";
    cout<<maxNum;
    cout<<endl;
    cout<<"minimum no. in an array is : ";
    cout<<minNum;

    printing extreme of array
   while(start<=end){
    if(start==end){
        cout<<frr[start]<<" ";
        }
        else{
            cout<<frr[start]<<" ";
            cout<<frr[end]<<" ";
        }
    start++;
    end--;
   }

    //printing reverse of array
    while(start<=end){
     
        if(start==end){
            
            frr[start]=frr[end];
        }
        else{
            frr[start]=frr[end];
        }
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<frr[i]<<" ";
    }



    // int err[10]={1,0,1,0,0,1,1,0,1,0};
    // int size=10;
    // int numone=0;
    // int numzero=0;
    

    // cout<<"the no. of 1's in an array: ";
    // findone(err,size);
    // cout<<endl;
    // cout<<"the no. of 0's in an array: ";
    // findzero(err,size);
   
    

    // int drr[10]={1,2,3,4,5,6,7,8,9,10};
    // int key;
    // int size=10;
    // cout<<"enter the key you want to search: ";
    // cin>>key;

    // if(findkey(drr,size,key)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }


    // int crr[5]={1,2};
    // for(int i=0;i<5;i++){
    //     cout<<crr[i];
    // }


    // int brr[]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     brr[i]=1;
    // }

    // for(int i=0;i<5;i++){
    //     cout<<brr[i];
    // }


    // int arr[5];
    // cout<<"enter the elements in array: ";
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    // cout<<"their doubles are: ";
    // for(int i=0;i<5;i++){
    //     cout<<2*arr[i]<<" ";
    // }
}