#include<iostream>
using namespace std;

void printarr(int arr[],int size,int i) {
    
    if(i>=size){
        return;
    }
    cout<<arr[i]<<" ";

    printarr(arr,size,i+1);

}

int main(){
    int arr[5]={10,20,30,40,50};
    int size=5;
    int i=0;
    printarr(arr,size,i);

}