#include<iostream>
#include<vector>
using namespace std;

int firstoccurrence(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
       else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
} 

int lastoccurrence(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
       else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
} 

int peakelement(vector<int>brr){
    int start=0;
    int end=brr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
    if(brr[mid]<brr[mid+1]){
        start=mid+1;
    }
    else{
        end = mid;
    }
    mid=start+(end-start)/2;
         }
    return mid;
}

int missingelement(vector<int>crr){
    int start=0;
    int end=crr.size()-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(crr[mid]=crr[mid+1]-1
        
        ){
            
            start=mid+1;

        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return crr[mid+1];
    
}

int squareroot(int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;

    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int negativenums(vector<int>drr){
    int s=0;
    int e=drr.size()-1;
    int mid=s+(e-s)/2;
    int ans;

    while(s<=e){
        if(drr[mid]>=0){
            e=mid-1;
            
        }
        else if(drr[mid]<0){
            mid=ans;
            s=mid+1;
            
        }
        else if(drr[mid]<0&&drr[mid+1]>=0){
            return mid;
        }
        else{
            return -1;
        }

        mid=s+(e-s)/2;
        
    }
    return mid;
}

int main(){

    vector<int>arr{1,3,4,4,4,4,4,5,6,7,8};
    vector<int>brr{0,10,7,5};
    vector<int>crr{1,2,3,5,6,7,8,9};
    vector<int>drr{-3,-2,-1,-1,1,2,3};
    
    // vector<int>drr;
    int target=10;
    int n;
    cout<<"enter n"<<" ";
    cin>>n;

    int precision;
    cout<<"enter the precision: "<<" ";
    cin>>precision;
    int findfirstocc=firstoccurrence(arr,target);
    cout<<"index of first occurrence is "<<findfirstocc;

    cout<<endl;
    int findlastocc=lastoccurrence(arr,target);
    cout<<"index of last occurrence is "<<findlastocc;

    cout<<endl;
    int totalocc=findlastocc-findfirstocc+1;
    cout<<"total no. of occurrence is "<<totalocc;

    cout<<endl;
    int findpeakelement=peakelement(brr);
    cout<<"peak element in an array is st index "<<findpeakelement;

    cout<<endl;
    int findmissingelement=missingelement(crr);
    cout<<"missing element in an array is "<<findmissingelement;

    cout<<endl;
    int findsquareroot=squareroot(n);
    cout<<"square root of the given element is "<<findsquareroot;

    cout<<endl;
    double step=0.1;
    double finalans=findsquareroot;

    for(int i=0;i<precision;i++){
        for(double j=finalans;j*j<n;j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"final sqare root is : "<<finalans<<" ";


    cout<<endl;
    int findnegativenums=negativenums(drr);
    cout<<"total negative numbers in an array is : "<<findnegativenums;




    return 0;

    
}