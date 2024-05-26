#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>arr{4,5,7,8,9,6,3,1,4};
    

    for(int i=0;i<arr.size()-1;i++){
        int minIndex=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

    //bubble sort
    for(int round=1;round<arr.size();round++){
        for(int i=0;i<arr.size()-round;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        
    }

    //optimized bubble sort
    for(int round=1;round<arr.size();round++){
        bool swapped =false;
        for(int i=0;i<arr.size()-round;i++){
            if(arr[i]>arr[i+1]){
                swapped = true;
                swap(arr[i],arr[i+1]);
            }
        }
        if(swapped==false){
            //sort ho chuka hai no need to check further
            break;
        }
        
    }


    cout<<"selection sort"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
     cout<<"bubble sort"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
     cout<<"optimized bubble sort"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}