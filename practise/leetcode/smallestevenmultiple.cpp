#include<iostream>
using namespace std;

int smallestEvenNumber(int n){
    int i=0;
    while(i%n==0 && i%2==0){
        return i;
        i++;
        

    }
    cout<<i;
     
}

int main(){
    int n;
    cin>>n;
    smallestEvenNumber(n);
}