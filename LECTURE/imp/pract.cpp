#include<iostream>
#include <algorithm>

using namespace std;

int partition(int arr[],int s,int e){
    int pivotIndex= s ;
    int pivotElement=arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    };

    int rightIndex= s + count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;


    int i=s;
    int j=e;

    while( i < pivotIndex && j > pivotIndex  ){

        while(arr[i]<=pivotElement){
            i++;
        }

        while(arr[j] > pivotElement){
            j--;
        }


         if( i < pivotIndex && j > pivotIndex){
        swap(arr[i],arr[j]);

       }
    }    

   

    return pivotIndex;

}


void quickSort(int arr[],int s,int e){
    

    if(s>=e){
        return;
    }

    int p=partition(arr, s, e);
    

    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
}


int main(){
    int arr[]={10,52,2,4,65,3,5};
    int n=7;
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    quickSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }


    return 0;
}