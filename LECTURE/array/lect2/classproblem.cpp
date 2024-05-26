#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
     int ans=0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
       
    }
    return ans;
}

// int unionArray(vector<int>arr,vector<int>brr,vector<int>crr){
//     for(int i=0;i<arr.size();i++){
//         crr.push_back(arr[i]);
//     }
//     for(int i=0;i<brr.size();i++){
//         crr.push_back(brr[i]);
//     }
//     for(int i=0;i<crr.size();i++){
//         cout<<crr[i]<<" ";
//     }
    
// }

int intersectionArray(vector<int>arr,vector<int>brr,vector<int>crr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                crr.push_back(arr[i]);
            }
        }
    }
     for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
}

int findPairsum(vector<int>arr,int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}

int sortzeroandone(vector<int>drr){
    int start=0;
    int end=drr.size()-1;

    for(int i=0;i<drr.size();i++){
        while(start<end){
             if(drr[start]==0){
             start++;
          }else{
            swap(drr[start],drr[end]);
            end--;
          }
        }
       
    }
    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }
}

int main(){
    vector<int>arr{1,2,3,4,2,1,4,9};
    vector<int>brr{7,8,5,9,5,5};
    vector<int>crr;
    vector<int>drr{1,0,1,0,1,0,1,0,0,1,0,1};
    int sum=5;
    //  int a= findUnique(arr);
    //  cout<<a;
    //  cout<<endl;

    //  cout<<endl;
    //  intersectionArray(arr,brr,crr);

    // findPairsum(arr,sum);
    sortzeroandone(drr);
}