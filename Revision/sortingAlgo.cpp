#include<bits/stdc++.h>
using namespace std;

// void selectionSort(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<arr.size()-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[minIndex],arr[i]);
//     }
// }

int main(){
    vector<int>arr{5,6,2,3};
    selectionSort(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
