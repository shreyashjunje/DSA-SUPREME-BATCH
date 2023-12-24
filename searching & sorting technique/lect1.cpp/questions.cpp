#include<iostream>
#include<vector>
using namespace std;

int firstocc(vector<int>arr,int key){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key&&arr[mid-1]!=key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
       mid=start+(end-start)/2;

    }
}
int lastocc(vector<int>arr,int key){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
       mid=start+(end-start)/2;

    }
    return ans;
}

int missingelement(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid]==mid+1){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return arr[mid]-1;
}

int peakelement(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end){
        if(arr[mid]<arr[mid+1]){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]>arr[mid+1]) {
            end=mid-1;
        }else{
            return ans;
        }
        mid=start+(end-start)/2;
    }
    
}
int main(){
    vector<int>arr{1,2,1,2,6,3,2};
    int a=peakelement(arr);
    cout<<a;
}
