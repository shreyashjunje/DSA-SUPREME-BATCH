#include<iostream>
#include<string>
using namespace std;

int lastocc(string& str,char x,int i,int& ans){
    if(i>str.length()-1){
        return ans;
    }
    if(str[i]==x){
        ans=i;
    }
    return lastocc(str,x,i+1,ans);
}

//method 2: traverse from end;

// int lastoccurrence(string& str,char x,int i){
//    if(str[i]==x){
//        return i;
//    }
//    return lastoccurrence(str,x,i-1);
   
    
// }


int main(){
    string str="rrr";
    char x='r';
    int i=0;
    int ans=0;
    int a=lastocc(str,x,i,ans);
    cout<<a;
}
