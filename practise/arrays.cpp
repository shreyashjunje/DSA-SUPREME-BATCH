#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sort0n1(vector<int>arr){
    int i=0;
    int s=0;
    int e=arr.size()-1;
    while(i!=e){
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

int duplet(vector<int>brr,int sum){
    for(int i=0;i<brr.size();i++){
        for(int j=i+1;j<brr.size();j++){
            if(brr[i]+brr[j]==sum){
                cout<<"("<<brr[i]<<","<<brr[j]<<")"<<endl;
            }
        }
    }
    
}
int triplet(vector<int>brr,int sum){
    for(int i=0;i<brr.size();i++){
        for(int j=i+1;j<brr.size();j++){
            for(int k=j+1;k<brr.size();k++){
                if(brr[i]+brr[j]+brr[k]==sum){
                cout<<"("<<brr[i]<<","<<brr[j]<<","<<brr[k]<<")"<<endl;
            }
            }
        }
    }
    
}
void unionarray(vector<int>crr,vector<int>drr,vector<int>err){
    for(int i=0;i<crr.size();i++){
        err.push_back(crr[i]);
       
    }
     
     for(int i=0;i<drr.size();i++){
        err.push_back(drr[i]);
        
    }
    for(int i=0;i<err.size();i++){
        cout<<err[i]<<" ";
    }
}
void reverse(vector<int>brr){
    for(int i=brr.size();i<0;i--){
        cout<<brr[i]<<" pppp ";
    }
}


int main(){
    vector<int>arr{1,0,1,0,1,0,1,0,1,0,1,0,1};
    vector<int>brr{1,2,3,4,5,6,7,8,9};
    vector<int>crr{1,2,3,4,5};
    vector<int>drr{5,10,20,30,40,50};
    vector<int>err;
    int sum=16;
    sort0n1(arr);
    cout<<endl;
    duplet(brr,sum);
    cout<<endl;
    triplet(brr,sum);
    cout<<endl;
    unionarray(crr,drr,err);
    cout<<endl;
}

