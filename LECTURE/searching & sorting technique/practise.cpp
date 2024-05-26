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
        }else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int missingelement(vector<int>crr){
     int s=0;
    int e=crr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(crr[mid]==mid+2 && crr[mid-1]==mid){

            return crr[mid]-1;

        }else if(crr[mid]==mid+1 && crr[mid+1]==mid+1){

            return crr[mid]+1;

        }else{

            if(crr[mid]=mid+1 && crr[s]+1){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int peakelement(vector<int>drr){
    int s=0;
    int e=drr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(drr[mid]>drr[mid+1] && drr[mid]>drr[mid-1]){
            return drr[mid];
        }
        if(drr[mid]>s){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}


int squareroot(int target){
      int s=0;
    int e=target-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        if(mid*mid<target){
            mid=ans;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90};
    vector<int>brr{1,2,2,2,2,2,3,4,5,6,7,8,9};
    vector<int>crr{1,2,3,4,5,6,7,8,9};
    vector<int>drr{3,4,5,6,7,1,2};
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
    
   
    cout<<"missing element is "<<missingelement(crr)<<endl;
    cout<<"peak element in an array is "<<peakelement(drr)<<endl;
    cout<<"square root of given element is "<<squareroot(target)<<endl;

    
}