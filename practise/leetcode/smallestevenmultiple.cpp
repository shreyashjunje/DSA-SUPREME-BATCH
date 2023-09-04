#include<iostream>
using namespace std;

int smallestevenmultiple(int n){
    if(n%2==0)
    return n;
    else
    return 2*n;

}

int main(){
    int n;
    cin>>n;
    int a=smallestevenmultiple(n);
    cout<<a;
}

