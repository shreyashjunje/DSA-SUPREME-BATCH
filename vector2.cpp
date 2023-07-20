#include<iostream>
#include<vector>
using namespace std;

int main(){


    //intersecton of two arrays

    // vector<int>arr{1,2,3,3,4,5};
    // vector<int>brr{2,3,3,7,8,9};
    // vector<int>crr;

   //intersection of two arrays
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<brr.size();j++){
    //         if(arr[i]==brr[j]){
    //             //mark for no duplication
    //             brr[j]=-1;
    //             crr.push_back(arr[i]);
    //         }
    //     }
        
    // }
    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";

    // }

    //union of two arrays with duplicates
    // for(int i=0;i<arr.size();i++){
    //    crr.push_back(arr[i]);
        
    // }
    // for(int i=0;i<brr.size();i++){
    //      brr[i]=-1;
    //       break;
    //    crr.push_back(brr[i]);
       
    // }
    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";
    // }

    //sum pair
    // vector<int>drr{1,3,5,7,2,4,6};
    // int sum=9;
    // for(int i=0;i<drr.size();i++){
    //     for(int j=i+1;j<drr.size();j++){
    //         if(sum==drr[i]+drr[j]){
    //             cout<<"("<<drr[i]<<","<<drr[j]<<")";
    //         }
    //         // break;
    //     }
    // }
    
    //triplet
    // vector<int>drr{1,3,5,7,2,4,6};
    // int sum=9;
    // for(int i=0;i<drr.size();i++){
    //     for(int j=i+1;j<drr.size();j++){
    //         for(int k=j+1;k<drr.size();k++){
            
    //         if(sum==drr[i]+drr[j]+drr[k]){
    //             cout<<"("<<drr[i]<<","<<drr[j]<<","<<drr[k]<<")";
    //         }
    //         // break;
    //         }
    //     }
    // }

    //sort 0's and 1's

    int err[]={0,1,1,0,1,0,1,0,1,0};
    int size=10;
    int start=0;
    int end=size-1;
    int i=0;
    

    while(start!=end){
        
        if(err[i]==0){
            swap(err[start],err[i]);
            start++;
            i++;
        }
        else{
           swap( err[end],err[i]);
            
            end--;
        }
        
    }
    for(int i=0;i<size;i++){
        cout<<err[i]<<" ";
    }
 return 0;
}