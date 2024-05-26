#include<iostream>
using namespace std;

bool palindromecheck(string str,int s,int e){
    //base condition
    if(s>=e){
        return true;
    }
    //processing
    if(str[s]!=str[e]){
        return false;
    }
    //recursion sambhal lega
    return palindromecheck(str,s+1,e-1);
  
    
}


int main(){
    string str="racecar";
    int s=0;
    int e=str.length()-1;
    bool ans=palindromecheck(str,s,e);
    cout<<ans;
}
