#include<iostream>
#include<limits.h>
#include<algorithm>
#include<string>
using namespace std;

int climbstairs(int n){
    
    if(n==0 || n==1){
        return 1;
    }
    
   int  ans = climbstairs(n-1)+climbstairs(n-2);
   return ans;
}

void printarr(int arr[5],int size,int i){
   
    if(i>=size){
        return;
    }
    cout<<arr[i]<<" ";
    return printarr(arr,size,i+1);
}

void findmax(int arr[],int size,int i, int& maxi){
    if(i>=size){
        return;
    }
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    findmax(arr,size,i+1,maxi);
    

}
bool findchar(string str,int i){
    if(i>=str.length()){
        return false;
    }

    if(str[i]=='r'){
        return true;
    }

    bool ans = findchar(str,i+1);
    return ans;
}

int main(){
//     int n;
//     cin>>n;
//    int ans= climbstairs(n);
//    cout<<ans;
//    cout<<endl;
   
//    int arr[5]={10,20,30,40,50};
//    int size=5;
//     int i=0;
//    printarr(arr,size,i);

//    int maxi=INT_MIN;
//    findmax(arr,i,size,maxi);
//    cout<<maxi;
   
string str="lovebabbar";
int i=0;
int ans= findchar(str,i);
cout<<ans;

}


