#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,0,1,0,1,0,1,0,1,0,1,0,1};
    int i=0;
    int s=0;
    int e=arr.size()-1;
    while(i!=arr.size()){
        if(arr[i]==0){
            s++;
            i++;
        }else{
            swap(arr[i],arr[e]);
            e--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}