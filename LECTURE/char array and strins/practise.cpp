#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

//find length of string using while loop
int lengthofstring(char ch[100]){
    int count=0;
    int i=0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

//find length of string using for loop
int lengthofstr(char ch[100]){
    int count=0;
    for(int i=0;i<strlen(ch);i++){
        count++;
    }
    return count;
}

//reverse a string
char reversestring(char ch[100]){
    int s=0;
    int e=strlen(ch)-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    cout<<ch;
}

char reverseelement(char ch[100]){
    for(int i=strlen(ch);i>=0;i--){
        cout<<ch[i];
    }
   
}

//replace a space by a character
char replacespace(char ch[100]){
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]==' '){
            ch[i]='@';
        }
    }
    cout<<ch;
}

//palindrome
bool palindrome(char ch[100]){

    int i=0;
    int j=strlen(ch)-1;
    while(ch[i]<=ch[j]){
        if(ch[i]==ch[j]){
        
            return true;

        }
         i++;
        
    }
    return false;
}

//convert uppercase into lower case
char converttolower(char ch[100]){
    for(int i=0;i<strlen(ch);i++){
        ch[i]=ch[i]+'a'-'A';
    }
    cout<<ch;
}

//convert lower case into uppercase
char converttoupper(char ch[100]){
    for(int i=0;i<strlen(ch);i++){
        ch[i]=ch[i]-'a'+'A';
    }
    cout<<ch;
}

int main(){
    char ch[100];
    cin.getline(ch,20);

    for(int i=0;i<9;i++){
        cout<<"value is "<<ch[i]<<" at index "<<i<<endl;

    }

    //find length of string
    int findlengthofstring=lengthofstr(ch);
    cout<<"length of the string is: "<<findlengthofstring;
    cout<<endl;
    
    //reverse a string
    cout<<"reverse of string is: ";
    reverseelement(ch);
    cout<<endl;

    //replace spaces by a special character
    cout<<"string after replacing spaces is: ";
    replacespace(ch);
    cout<<endl;


    //palindrome or not
    if(palindrome(ch)){
        cout<<"it is a palindrome"<<endl;
    }else{
        cout<<"it is not palimdrome"<<endl;
    }

    //convert uppercase to lower case
    cout<<"converting string into lowercse: ";
    converttolower(ch);
    cout<<endl;

    //convert lower to upper
     cout<<"converting string into uppercase: ";
     converttoupper(ch);
  
     cout<<endl;
}