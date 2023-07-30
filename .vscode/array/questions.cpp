#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int target){
    for(int i=0;i<=size;i++){
        if(target==arr[i]){
            cout<<"present in an array";
        }else{
            cout<<"not present in an array";
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int target=7;

    cout<<"the given number is ";
    linearsearch(arr,target,size);


    return 0;
}