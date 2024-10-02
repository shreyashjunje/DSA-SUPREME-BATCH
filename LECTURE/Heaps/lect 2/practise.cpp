#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;


int kthSmallestElement(int arr[],int n,int k){

    priority_queue<int>pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    //baki ke element tabhi insert karo jo heap ke top element se chhote ho

    for(int i=k;i<n;i++){
        int top=pq.top();
        if(arr[i]<top){
            pq.pop();
            pq.push(arr[i]);

        }
    }

    return pq.top();


}

int main(){
    int arr[]={1,2,15,78,4,6,8};
    int n=7;
    int k=7;

    int ans=kthSmallestElement(arr,n,k);
    cout<<"Ans is : "<<ans<<endl;
}