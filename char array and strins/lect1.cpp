#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void replace(char ch[]){
            int i=0;

    while(ch[i]!='\0'){
        if(ch[i]==' '){
            ch[i]='x';
            i++;
        }
    }
    for(int i=0;i<strlen(ch);i++){
        cout<<ch;
    }
}
int main(){
    char ch[100];
    cin>>ch;
    replace(ch);
    
    return 0;
}