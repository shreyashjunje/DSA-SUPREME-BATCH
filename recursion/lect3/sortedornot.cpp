// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool sortedornot(int arr[],int size,int i){
    if(i==size-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }
    return sortedornot(arr,size,i+1);
   
}

int main() {
   int arr[5]={0,0,0,1};
   int size=5;
   int i=0;
   bool a=sortedornot(arr,size,i);
   cout<<a;

    return 0;
}