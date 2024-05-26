#include<iostream>
#include<string.h>
using namespace std;

string removeduplicates(string str){
    string ans=" ";
    int i=0;
    while(i<str.length()){
        if(ans.length()>0){
            if(ans[ans.length()-1]==str[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(str[i]);
            }
        }
        else{
             ans.push_back(str[i]);
         }
          i++;
        }
        return ans;
    }

//removeoccurrence of the string
string removeoccurrences(string str, string part){
    int pos = str.find(part);
    while(pos != string::npos){
        str.erase(pos, part.length());
        pos=str.find(part);
    }
    return str;
}

//valid palindrome 

bool checkpalindrome(string str,int j , int i){
    while(i<=j){
        if(str[i]==str[j]){
            return true;
        }
        else{
            return false;
        }
    }
}

bool validpalindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i<=j){
        if(str[i]!=str[j]){
            return checkpalindrome(str,i+1,j) || checkpalindrome(str,i,j-1);
        }
        else{
            i++;
            j--;
        }
    }
    
}



int main(){
    string str;
    cout<<"enter the string: ";
    cin>>str;

    string part;
    cout<<"enter part: ";
    cin>>part;

    if(validpalindrome(str)){
        cout<<"it is a palindrome after removing one character."<<endl;
    }
    else{
         cout<<"it is not a palindrome after removing one character."<<endl;
    }

    string removeocc=removeoccurrences(str,part);
    cout<<"string after removing all occurrences: "<<removeocc;
    cout<<endl;

    string a=removeduplicates(str);
    cout<<"string after removing adjacent occurrences: "<<a;



}