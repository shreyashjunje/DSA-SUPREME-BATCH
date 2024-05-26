#include<iostream>
#include<string.h>
#include<limits.h>
using namespace std;

bool findkey(string str,char key,int i){
    if(i>=str.length()){
        return false;
    }
    if(str[i]==key){
        return true;
    }
    return findkey(str,key,i+1);
}


int main(){
    string str="lovebabbar";
    char key='r';
    int i=0;
    
    bool ans=findkey(str,key,i+1);
    cout<<ans;
    
}