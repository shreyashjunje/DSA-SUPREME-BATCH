#include<iostream>
#include<vector>
using namespace std;

//linear search
bool linearsearch(vector<int>arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

    //bimary search
int binarysearch(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(target==arr[mid]){
            return mid;
        }
        if(arr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

//find first occurrence of the element 
int firstoccurrence(vector<int>brr,int target){
    int s=0;
    int e=brr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(brr[mid]==target){
            mid=ans;
            e=mid-1;
        }
        else if(brr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}


int lastoccurrence(vector<int>brr,int target){
     int s=0;
    int e=brr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(brr[mid]==target){
            mid=ans;
            s=mid+1;
        }
        else if(brr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90};
    vector<int>brr{1,2,2,2,2,2,3,4,5,6,7,8,9};
    int target;
    cout<<"enter target: ";
    cin>>target;

    //linear search
    if(linearsearch(arr,target)){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

    //binary search;
    if(binarysearch(arr,target)==-1){

        cout<<"not found"<<endl;
    }else{
        cout<<"found"<<endl;
    }
    
    //first occurrence of th etarget
    int a=firstoccurrence(brr,target);
    cout<<"first occurrence of the target is at index "<<a<<endl;

    


    
}