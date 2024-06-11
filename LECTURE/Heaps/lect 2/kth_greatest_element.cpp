#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;


int kthGreatestElement(int arr[],int n,int k){

    priority_queue<int , vector<int> , greater<int> >pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    //baki ke element tabhi insert karo jo heap ke top element se bade ho

    for(int i=k;i<n;i++){
        int element=arr[i];
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(element);

        }
    }

    int ans=pq.top();
    return ans;


}

int main(){
    int arr[]={1,2,15,78,4,6,8};
    int n=7;
    int k=3;

    int ans=kthGreatestElement(arr,n,k);
    cout<<"Ans is : "<<ans<<endl;
}