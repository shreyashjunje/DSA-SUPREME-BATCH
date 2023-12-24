// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void printsubsequence(string str,string output,int i){
    //base condition
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    
    //exclude
    printsubsequence(str,output,i+1);
    
    //include
    output.push_back(str[i]);
    printsubsequence(str,output,i+1);
    
}




int main() {

    string str="abc";
    string output="";
    int i=0;
  
    printsubsequence(str,output,i);

    return 0;
}