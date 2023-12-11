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

int main(){
    vector<int>arr{1,2,3,4,2,1,4,9};
    vector<int>brr{7,8,5,9,5,5};
    vector<int>crr;
     int a= findUnique(arr);
     cout<<a;
     cout<<endl;

     cout<<endl;
     intersectionArray(arr,brr,crr);
}