#include<iostream>
using namespace std;

int main(){
    // int a=5;
    // char b='b';
    // double c=1.03;
    // int *ptr=&a;
    // char *p=&b;
    // double *d=&c;

    // cout<<"address of a is: "<<&a<<endl;
    // cout<<"address of pointer is: "<<&ptr<<endl;
    // cout<<"value present at ptr is: "<<ptr<<endl;
    // cout<<"value that poihter is addressing is: "<<*ptr<<endl;
    // cout<<"size of ptr "<<sizeof(ptr)<<endl;
    // cout<<"size of p "<<sizeof(p)<<endl;
    // cout<<"size of d "<<sizeof(d)<<endl;

    int a=5;
    int *b=&a;
    int *c=b;
    int *d=c;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;
    cout<<*c<<endl;
    cout<<*d<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    cout<<&d<<endl;
    cout<<&a<<endl;
    cout<<*b+*c+*d<<endl;
  


}
