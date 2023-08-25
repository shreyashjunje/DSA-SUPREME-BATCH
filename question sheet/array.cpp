#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

void printnegarr(vector<int>arr){
   int s=0;
    int e=arr.size()-1;
    int i=0;
    while(i!=e){
        if(arr[i]<0){
            swap(arr[i],arr[e]);
            
            e--;
        }else{
             s++;
            i++;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

void sort(vector<int>brr){
    int min=brr[i];
    for(int i=0;i<brr.size();i++){
        for(int j=i+1;j<brr.size();j++){
            if(brr[j]<min){
                min=brr[j];
            }

        }
    }
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }

}



int main(){
    vector<int>arr{-1,2,-2,5,78,-6};
    vector<int>brr(0,2,0,1,0,2,0,1,2,1,0,1,2);
    printnegarr(arr);
    sort(brr);

}