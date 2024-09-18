// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void convertToBinary(int& num,string &ans){
    if(num==1 || num==0){
        if(num==1){
            ans=to_string(num)+ans;
        }
        return;
    }
    
    ans=to_string(num%2)+ans;
    num=num/2;
    
    convertToBinary(num,ans);
    
}

// int convertBinaryToInteger(string B){
//     reverse(B.begin(),B.end());
//     int n=B.length();
//     int integer=0;
//     for(int i=n-1;i>=0;i--){
//         int num=B[i]-'0';
//         integer=integer+num*pow(2,i);
        
//     }
    
//     return integer;
// }


int main() {
    // Write C++ code here
    string s;
    cout<<"enter the number: ";
    cin>>s;
    // string ans="";
    
    // convertToBinary(num,ans);
    // cout<<ans;
    
    // int string str="1101";
    int ans=convertBinaryToInteger(s);
    cout<<ans;

    return 0;
}