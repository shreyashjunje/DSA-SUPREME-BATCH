#include<bits/stdc++.h>

using namespace std;

int maxnum(int arr[],int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>=maxi){
            maxi=arr[i];
        }
    }
    cout<< maxi;
}
int minnum(int arr[],int size){

    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<=mini){
            mini=arr[i];
        }
    }
    cout<<mini;
}

int linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
        
    }
    return false;

}

int countzeroandone(int brr[],int size){
     int countzero = 0;
     int countone = 0;
    for(int i=0;i<size;i++){
        if(brr[i]==0){
            countzero=countzero+1;
        }else{
            countone=countone+1;;
        }
    }
    cout<<"no.of one : "<<countone<<endl;
    cout<<"no.of zero : "<<countzero<<endl;
}

void extremeprint(int arr[],int size){
    int start = 0;
    int end = size-1;

    for(int i=0 ;i<size;i++){
           while(start<=end){
         if(arr[start]==arr[end]){
        cout<<arr[start]<<" ";
    }else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
    }
    start++;
    end--;
    }
    }
}

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
       swap(arr[start],arr[end]);
       start++;
       end--;

    }
}

int main(){
    int arr[5] = {10,20,30,4,80};
    int brr[5] = {0,1,0,0,1};
    int size =5;
    int key = 5;
    maxnum(arr,size);
    cout<<endl;
    minnum(arr,size);
    cout<<endl;
    cout<<linearsearch(arr,size,key);
    cout<<endl;
    countzeroandone(brr,size);
    cout<<endl;
    extremeprint(arr,size);


    
    
}