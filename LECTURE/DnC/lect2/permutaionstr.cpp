#include<iostream>
#include<string>
using namespace std;

void permutationOfStr(string& str,int i){
    if(i>=str.length()){
        cout<<str<<" ";
        return;

    }
    int j=i;
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        permutationOfStr(str,i+1);
        swap(str[j],str[i]);

    }


}


int main(){
    string str="abc";
    int i=0;
    
    permutationOfStr(str,i);
}