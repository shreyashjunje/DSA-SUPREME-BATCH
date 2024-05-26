#include<iostream>
using namespace std;

void printnum(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

int addtwonum(int a,int b){
    int c=a+b;
    return c;
}

int addthreenum(int a,int b,int c){
    int d=a+b+c;
    return d;
} 

int maxnum(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}

int minnum(int a,int b,int c){
    if(a<=b && a<=c){
        return a;
    }
    else if(b<=a && b<=c){
        return b;
    }
    else {
        return c;
    }
}

float areaofcircle(float r){
    float a=3.14*r*r;
    return a;
}

void evenorodd(int n){
    if(n%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}

 int factorial( int n){
     int count=1;
    for(int i=1;i<=n;i++){
        count=count*i;
    }
    return count;
}

bool primenum(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
           return true;
        }else{
            return false;
        }
    }
}

float kmtomiles(int n){
    float convert=n*0.621371;
    return convert;
}

float celciustofarenheit(int n){
    float convert=(n*1.8)+32;
    return convert;
}

int  sumupton(int n){
    int count=0;
    for(int i=0;i<=n;i++){
        count=count+i;

    }
    return count;
}

int sumofevennum(int n){
    int count=0;
    for(int i=0;i<=n;i=i+2){
        count=count+i;
    }
    return count;
}

int reverseint(int n){
    int ans=0;
    int remainder=0;
    while(n>0){
        remainder=n%10;
        ans=ans*10+remainder;
        n=n/10;
    }
    return ans;
}

int printprimenum(int n){
  
    
}
int main(){
    int n,a,b,c,r;
    cout<<"enter the value of n : ";
    cin>>n;
    // cout<<"enter the value of a: ";
    // cin>>a;
    // cout<<"enter the value of b: ";
    // cin>>b;
    // cout<<"enter the value of c: ";
    // cin>>c;
//    cout<<"enter the radius of circle: ";
//    cin>>r;

    //print numbers from 1 to n
    // cout<<"printing number sfrom 1 to n: ";
    // printnum(n);

    //addition of two nnumbers
    // int additionoftwo=addtwonum(a,b);
    // cout<<"addition of two numbers is : "<<additionoftwo;
    // cout<<endl;

    // //addition of three numbers
    // int additionofthree=addthreenum(a,b,c);
    // cout<<"addition of three numbers is : "<<additionofthree;
    // cout<<endl;

    // //maximum of three num
    // int maxi=maxnum(a,b,c);
    // cout<<"maximum number is: "<<maxi;
    // cout<<endl;

    // //minimum of three nums
    // int mini=minnum(a,b,c);
    // cout<<"minimum number is: "<<mini;
    // cout<<endl;

    //area of circle
    // float area=areaofcircle(r);
    // cout<<"area of the circle is: "<<area;
    // cout<<endl;

    //find number is even or odd
    
    cout<<"the given number is ";
    evenorodd(n);
    cout<<endl;

    //factorial of numbers
    int facto=factorial(n);
    cout<<"factorial of "<<n<<" is "<<facto;
    cout<<endl;

    //find prime num or not
    cout<<"the given number is ";
    if(primenum(n)==true){
        cout<<" not a prime number";
    }else{
        cout<<"a prime number";
    }
    cout<<endl;

    //convert distance in km to miles
    float distance=kmtomiles(n);
    cout<<"the distance "<<n<<" km in miles is "<<distance;
    cout<<endl;

    //convert celcius to fahrenheit
    float temperature=celciustofarenheit(n);
    cout<<"temperature "<<n<<" celcius in farenheit is "<<temperature;
    cout<<endl;

    //couning 1 to n
    int count=sumupton(n);
    cout<<"total sum from 1 to n is "<<count;
    cout<<endl;

    //sum of even num  upto n
    int evencount=sumofevennum(n);
    cout<<"sum of even numbers upto n is: "<<evencount;
    cout<<endl;

    //reverse aninteger
    int reverse=reverseint(n);
    cout<<"reverse integer is "<<reverse;
    cout<<endl;
    
    //palindrome or not
    if(reverse==n){
        cout<<"it is a palindrome";
    }else{
        cout<<"it is not a palindrome";
    }
    cout<<endl;
    //printing prime num upto n
    cout<<"printing prime numbers from 1 to "<<n;
    for(int i=1;i<=n;i++){
        int d=primenum(n);
        if(d==false){
            cout<<n;
        }
    }
    

    }
