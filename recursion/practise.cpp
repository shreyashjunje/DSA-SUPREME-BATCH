#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
using namespace std;

void printmax(int arr[], int size, int i,int& maxi){
    //base condition
    if(i>=size){ 

        return;
        
    }
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    printmax(arr,size,i+1,maxi);
}

void printmin(int arr[],int size,int i,int& mini){
    if(i>=size){
        return;
    }
    if(arr[i]<mini){
        mini=arr[i];
    }
    printmin(arr,size,i+1,mini);
}

bool checkkey(string str, char key, int i, int n){
    if(i>=n){
        return false;
    }
    if(str[i]==key){
        return true;
    }
    checkkey(str,i+1,key,n);
}
void printnegarray(vector<int>brr,int s,int i,int e){
    if(i>e){
        return;
    }
    if(brr[i]<0){
        swap(brr[i],brr[e]);
        e--;
    }
    
    
    printnegarray(brr,i+1,s+1,e);
    
}
int main(){
    vector<int>brr={-1,2,52,-5,-6,5};
    int i=0;
    int s=0;
    int e=brr.size()-1;
    int arr[6]={10,5,84,78,52,2};
    int size=6;
    string str={"lovebabbar"};
    char key='r';
    int n=str.length();
    
    int maxi=INT_MIN;
    int mini=INT_MAX;
    printmax(arr,size,i,maxi);
    printmin(arr,size,i,mini);
    cout<<"maximuym number in an array is " <<maxi<<endl;
    cout<<"minimum number in an array is "<<mini<<endl;
    
    bool ans=checkkey(str,key,i,n);
    if(ans==1){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
        
    }
    cout<<endl;
    printnegarray(brr,i,s,e);
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
}