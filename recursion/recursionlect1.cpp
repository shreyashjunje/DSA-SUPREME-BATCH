#include<iostream>
#include<string.h>
using namespace std;

string str(string str1,string str2){
    return str1 + str2;
}

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    string a=str(str1,str2);
    cout<<a;

}


