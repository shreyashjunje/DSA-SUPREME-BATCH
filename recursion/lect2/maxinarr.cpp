#include<iostream>
#include<limits.h>
using namespace std;

void  maxinarr(int arr[],int size,int i,int& max) {
    
    if(i>=size){
        return ;
    }

    if(arr[i]>max){
        max=arr[i];
         
    }
    maxinarr(arr,size,i+1,max);
   
   
}

int main(){
    int arr[5]={10,20,30,40,50};
    int size=5;
    int i=0;
    int max= INT_MIN;
    maxinarr(arr,size,i,max);
    cout<<max;
    
}