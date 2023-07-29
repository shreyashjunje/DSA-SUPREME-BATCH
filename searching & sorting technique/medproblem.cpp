#include<iostream>
#include<vector>
using namespace std;

//binary search in am nearly sorted array
int binarysearch(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(mid+1<arr.size() &&arr[mid+1]==target){
            return mid+1;
        }
        if(mid-1>0 && arr[mid-1]==target){
            return mid-1;
    }
    if(arr[mid]<target){
        s=mid+2;
    }else{
        e=mid-2;
     }
     
     mid=s+(e-s)/2;
    }
    return mid;

}

int quotient(int divident,int divisor){
    int s=0;
    int e=abs(divident);
    int mid=s+(e-s)/2;
    int answer=0;

    while(s<=e){
        if(abs(mid*divisor)==abs(divident)){
            answer=mid;
            break;
        }
        if(abs(mid*divisor)>abs(divident)){
            e=mid-1;
           
        }
        else{
             s=mid+1;
             answer=mid;
        }
        mid=s+(e-s)/2;
    }
    if((divisor<0&&divident<0) || (divisor>0&&divident>0)){
        return answer;
    }
    else{
        return -answer;
    }
}
int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target=80;
    
    int divisor,divident;
     
    cout<<"enter divident"<<" ";
    cin>>divident;
    cout<<"enter divisor"<<" ";
    cin>>divisor;


    int ans=binarysearch(arr,target);
    cout<<"index of target is : "<<ans;

    cout<<endl;
    int findquotient=quotient(divident,divisor);
    cout<<"quotient is at index "<<findquotient;



    return 0;
}