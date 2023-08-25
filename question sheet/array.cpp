#include <bits/stdc++.h>

using namespace std;

void reversearr(vector<int>brr){
    int s=0;
    int e=brr.size()-1;
    int i=0;
    while(i!=e){
        swap(brr[s],brr[e]);
        s++;
        e--;
    }
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
}

int printmax(vector<int>brr){
   int maxi=INT_MIN;
    for(int i=0;i<brr.size();i++){
        if(brr[i]>=maxi){
            maxi=brr[i];
        }
    }

    return maxi;
    
}
void printkthsmallest(vector<int>brr,int k){
    sort(begin(brr),end(brr));
    cout<<"kth smallest element in an array is "<<brr[k-1];
}
void printkthlargest(vector<int>brr,int k){
    int s=0;
    int e=brr.size()-1;
    int i=0;
    sort(begin(brr),end(brr));
    while(i!=e){
        swap(brr[i],brr[e]);
        i++;
        e--;
    }
    cout<<"kth largest element in an array is "<<brr[k-1];
    
   
}


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
void sort012(vector<int>crr,vector<int>drr){
    for(int i=0;i<crr.size();i++){
        if(crr[i]==0){
            drr.push_back(crr[i]);
        }
    }
    for(int i=0;i<crr.size();i++){
        if(crr[i]==1){
            drr.push_back(crr[i]);
        }
    }
    for(int i=0;i<crr.size();i++){
        if(crr[i]==2){
            drr.push_back(crr[i]);
        }
    }
    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }

}

 void printunion(vector<int>brr,vector<int>drr,vector<int>err){
     for(int i=0;i<brr.size();i++){
         drr.push_back(brr[i]);
    }
    for(int i=0;i<err.size();i++){
         drr.push_back(err[i]);
    }
    sort(begin(drr),end(drr));
     for(int i=0;i<drr.size();i++){
         cout<<drr[i]<<" ";
    }
 }
 void printinteraction(vector<int>brr,vector<int>err){
    for(int i=0;i<brr.size();i++){
        for(int j=0;j<err.size();j++){
            if(brr[i]==err[i]){
                cout<<brr[i]<<" ";
            }
        }
    }
 }

 void rotatecyclically(vector<int>brr){
    for(int i=0;i<brr.size();i++){


        brr[i]=brr[i+1];
    }
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
 }



int main(){
    vector<int>arr{-1,2,-2,5,78,-6};
    vector<int>brr{10,50,40,60,70,80};
    vector<int>crr{0,1,2,0,2,1,0,2,1,0,2,1,0,1};
    vector<int>drr;
    vector<int>err{10,20,30,40,70,80,90,};

    // int maxi=INT_MIN;
    // int mini=INT_MAX;
    // int k;
    // cout<<"enter the kth number: ";
    // cin>>k;

    // printnegarr(arr);
    // cout<<endl;
    // reversearr(brr);
    // cout<<endl;
    
    

    // for(int i=0;i<brr.size();i++){
    //     if(brr[i]>=maxi){
    //         maxi=brr[i];
    //     }
    // }
    // for(int i=0;i<brr.size();i++){
    //     if(brr[i]<=mini){
    //         mini=brr[i];
    //     }
    // }
    // cout<<"maximum number in an array is "<<maxi<<endl;
    // cout<<"minimum numvber in an array is "<<mini<<endl;
    
    // if(k>brr.size()){
    //     cout<<"value of k is not valid";
    // }else{
    //      printkthsmallest(brr,k);
    //      printkthlargest(brr,k);
    // }

    // cout<<"sort 0,1 and 2 : ";
    // sort012(crr,drr);

    // cout<<"printing union of two sorted arrays: ";
    // printunion(brr,err,drr);

    // cout<<"printing interaction of two arrays: ";
    // printinteraction(brr,err);
    
    rotatecyclically(brr);

}