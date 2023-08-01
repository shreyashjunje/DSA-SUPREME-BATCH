#include<iostream>
#include<string.h>
using namespace std;

int charlength(char name[]){
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    
    return count;
}

void reversestr(char name[100]){
   int i=0;
   int n=charlength(name);
   int j=n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }


}

int main(){
    char name[100];
    cin>>name;
    
   
    cout<<"length of the string is "<<charlength(name);
    cout<<endl;
    cout<<"reverse of given string is "<<name;
    cout<<endl;
    

}