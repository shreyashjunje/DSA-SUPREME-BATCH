#include<iostream>
#include<limits.h>
using namespace std;

void  mininarr(int arr[],int size,int i,int& min) {
    
    if(i>=size){
        return ;
    }

    if(arr[i]<min){
        min=arr[i];
         
    }
    mininarr(arr,size,i+1,min);
   
   
}

int main(){
    int arr[5]={10,20,30,40,50};
    int size=5;
    int i=0;
    int min= INT_MAX;
    mininarr(arr,size,i,min);
    cout<<min;
    
}