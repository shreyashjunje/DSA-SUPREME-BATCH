#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int secondlargest(vector<int>arr){
    
    int largest=0;
    int secondlarge=0;
    int smallest=INT_MAX;
    int secondsmall=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=largest){
            secondlarge=largest;
            largest=arr[i];
            
        }
    }
     for(int i=0;i<arr.size();i++){
        if(arr[i]<smallest){
           

           
            secondsmall=smallest;
            smallest=arr[i];
            
          
        }else if(secondsmall>arr[i]  && arr[i] != smallest){
            secondsmall=arr[i];
        }
        // cout<<secondsmall;
    }
    cout<<"["<<secondlarge<<","<<secondsmall<<"]";
    
}


int main(){
    vector<int>arr{1,2,4,4,5,4,5,4,4};
    secondlargest(arr);
    
}