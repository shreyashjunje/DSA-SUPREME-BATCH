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

int main(){

    //find uniquwe of elemnt
    // int n;
    // cout<<"enter the size of array ";
    // cin>>n;

    // vector<int>arr(n);
    // cout<<"enter the elements in an array : "<<endl;
    // for(int i=0;i<arr.size();i++){
        
    //     cin>>arr[i];

    // }

    // int uniqueElement = findUnique(arr);
    // cout<<"unique element is : "<<uniqueElement;
    
    // return 0;
    int n;
    cout<<"enetr the size of arr: "<<n;
    cin>>n;
    int m;
    cout<<"enter the size of brr: "<<m;
    cin>>m;

    vector<int>arr(n);
    vector<int>brr(m);
    vector<int>crr();

    cout<<"enter the elements in arr: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];

    }
    cout<<"enter the elements in brr: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];

    }

    for(int i=0;i<arr.size();i++){
        crr.push_back(arr[i])
    }
    for(int i=0;i<brr.size();i++){
        crr.push_back(brr[i])
    }
    cout<<"union of two arrays is : "
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
}