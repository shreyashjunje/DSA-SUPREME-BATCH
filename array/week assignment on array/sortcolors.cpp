#include<iostream>
#include<vector>
using namespace std;


// using selection sort
int sortcolors(vector<int>arr){
    
    for(int i=0;i<arr.size()-1;i++){
        int minIndex=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}

// using  three pointer approach
int sortcolors(vector<int>arr){
    int l=0;
    int h=arr.size()-1;
    int m=0;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++;
            l++;
        }else if(arr[m]==1){
            m++;
            
        }else{
            swap(arr[m],arr[h]);
            h--;
            
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    vector<int>arr{2,1,0,1,2,0,1,1,2,0,1,2,0};
    sortcolors(arr);
    
}

