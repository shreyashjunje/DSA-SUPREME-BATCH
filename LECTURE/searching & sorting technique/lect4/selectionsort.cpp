// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>arr){
    
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
          
        }
      swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
  vector<int>arr{5,4,3,2,1};
  selectionsort(arr);
    return 0;
}