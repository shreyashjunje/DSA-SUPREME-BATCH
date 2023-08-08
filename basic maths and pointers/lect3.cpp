#include<iostream>
using namespace std;


int main(){
    int a=5;
    int *ptr=&a;
    int **ptr2=&ptr;
    cout<<*ptr;
    cout<<**ptr2;
    cout<<*ptr2;
    **ptr2=*ptr+1;
    cout<<**ptr2;
}