#include<iostream>
using namespace std;


void heapify(int arr[], int size ,int i){
    int index=i;
    int largest=index;
    int leftIndex=2*i;
    int rightIndex=2*i+1;

    if(leftIndex <= size && arr[largest] < arr[leftIndex]){
        largest=leftIndex;

    }

    if(rightIndex <= size && arr[largest] < arr[rightIndex]){
        largest=rightIndex;
    }

    if(index!=largest){
        swap(arr[index],arr[largest]);
        index=largest;
        heapify(arr,size,i);
    }


}


int main(){

}