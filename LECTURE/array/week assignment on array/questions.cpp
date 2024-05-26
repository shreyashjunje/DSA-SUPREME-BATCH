// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int sortNegative(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    for(int i=0;i<arr.size();i++){
        if(arr[start]>=0){
            swap(arr[start],arr[end]);
            end--;
        }else{
            start++;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}


int main() {
    vector<int>arr{1,2,-3,4,-2,5};
    sortNegative(arr);
    return 0;
}