#include<iostream>
using namespace std;

void printdigit(int n){
    if(n==0){
        return;
    }
    printdigit(n/10);
    cout<<n%10<<" ";
   
}

int main(){
   int n;
   cin>>n;
   printdigit(n);
    
}