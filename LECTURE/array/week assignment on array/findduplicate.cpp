#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int>arr){
            int result =0;

    for(int i=0;i<arr.size();i++){
        result=result^i^arr[i];
    }
    return result;
}


int main(){
    vector<int>arr{2,2,2,2,2,2};
    int a=findDuplicate(arr);
    cout<<a;
}