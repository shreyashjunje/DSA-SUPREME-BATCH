#include<iostream>
using namespace std;

int smallestevenmultiple(int n){
    if(n%2==0)
    return n;
    else
    return 2*n;

}
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
int main(){
    int n;
    cin>>n;
    int a=smallestevenmultiple(n);
    cout<<a;
}

