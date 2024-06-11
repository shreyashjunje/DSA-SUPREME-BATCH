
#include<iostream>
using namespace std;


void heapify(int arr[], int n ,int i){
    int index=i;
    int largest=index;
    int leftIndex=2*i;
    int rightIndex=2*i+1;

    if(leftIndex <= n && arr[largest] < arr[leftIndex]){
        largest=leftIndex;

    }

    if(rightIndex <= n && arr[largest] < arr[rightIndex]){
        largest=rightIndex;
    }

    if(index!=largest){
        swap(arr[index],arr[largest]);
        index=largest;
        heapify(arr,n,index);
    }


}


void buildHeap(int arr[],int n){
    
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}

void heapSort(int arr[],int n){
    int index=n;

    while(n != 1){
        swap(arr[1],arr[index]);
        index--;
        n--;
        

        heapify(arr,n,1);
    }
}


int main(){
    int arr[]={-1,12,15,13,11,14};
    int size=5;

    buildHeap(arr,size);

    cout<<"printing the heap"<<endl;

    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    heapSort(arr,size);

    cout<<endl;

    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    

}