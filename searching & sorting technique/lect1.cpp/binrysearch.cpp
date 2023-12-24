#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int key){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            return 1;
        }
        if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}
int main(){
    vector<int>arr{1,2,4,5,9,12,45,65,78,98};
    int key=789456;
    
    if(binarysearch(arr,key)==1){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}

