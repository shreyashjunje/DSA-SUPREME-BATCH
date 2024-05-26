// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

 int moveZeros(int n, vector<int> a) {
    // Write your code here.int s=0;
    int s=0;
    int e=n-1;
    while(s<=e){
        
       if(a[s]==0){
           swap(a[s],a[e]);
           e--;
       }else {
           s++;
       }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    };

}


int main() {
   vector<int>a{0,0,0,1};
   int n=4;
   moveZeros(a,n);
  

    return 0;
}