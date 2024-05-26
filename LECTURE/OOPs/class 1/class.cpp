#include<iostream>
using namespace std;

class animal{

public:
    //states and properties
    int age;
    string type;

    //behavior and functions 
    void eat(){
        cout<<"eating"<<endl;

    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }

};

int main(){
    animal shera;
    cout<<"type of animal "<<shera.type<endl;
    cout<<"age of animal "<<shera.age<<endl;

}