
#include<iostream>
#include<string>
using namespace std;

bool isValid(string s) {
        string ans=" ";
        int i=0;
        while(i<s.length()){
            if(s.length()<=1){
                ans.push_back(s[i]);
            }else{
                if(ans[ans.length()-1]!=s[i]+2){
                    return false;
                }else{
                    return true;
                }
                i++;
            }
            
        }
        
    }
    
    int main(){
        string s,ans;
        cin>>s;
        if(isValid(s)){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }



























// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     //declare a string
//     string str;
//     string str1="yash";
//     // string target="hello";
//     //input
//     getline(cin,str);
//     //utput
//     cout<<str<<endl;;
//     cout<<"length of the string is "<<str.length()<<endl;
//     cout<<"string is "<<str.empty()<<endl;
//     str.push_back('g');
//     cout<<str<<endl;
//     str.pop_back();
//     cout<<str<<endl;
//     cout<<"substring: "<<str.substr(0,10)<<endl;
//     if(str.compare(str1)==0){
//         cout<<"strings are exactly same"<<endl;
//     }else{
//         cout<<"strings are not same"<<endl;
//     }
//     cout<<"compare: "<<str.compare(str1)<<endl;
//     str.clear();
//     cout<<"length of the string is "<<str.length()<<endl;
    
    
//     return 0;
// }
