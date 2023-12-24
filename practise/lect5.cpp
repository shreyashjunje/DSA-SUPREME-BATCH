// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int upperBound (vector<int> &arr, int x){
	// Write your code here.	
	     int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
           if(arr[mid]==x && arr[mid]!=arr[mid+1]){
               return mid+1;
           }
           if(arr[mid]>x){
               e=mid-1;
           }else{
               s=mid+1;
           }
            mid=s+(e-s)/2;
            
        }
        return mid;
    
}


int main() {
    vector<int>arr{1,4,7,7,10};
    int x=7;
   
    upperBound(arr,x);
    return 0;
}