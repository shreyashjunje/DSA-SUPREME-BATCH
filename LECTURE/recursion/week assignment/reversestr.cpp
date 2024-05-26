#include<iostream>
#include<string>
using namespace std;

string reversestr(string& str,int s,int e){
    if(s>=e){
        return str;
    }
    swap(str[s],str[e]);
    
    return reversestr(str,s+1,e-1);
}

int main(){
    string str="bob";
    int s=0;
    int e=str.length()-1;
    reversestr(str,s,e);
    cout<<str;
}
