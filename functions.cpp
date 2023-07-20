#include<iostream>
using namespace std;

//addition of three numbers
//  int sum(int a, int b , int c){
//     int sum = a+b+c;
//     return sum;
//     }

//max of three number
// int max(int a, int b, int c){
//     if(a>=b && a>=c){
//         return a;
//     }
//     else if(b>=a && b>=c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }

//counting from 1 to n;
// int countNum(int n){
//     int x=0;
//     for(int i=1;i<=n;i++){
        
//         x=x+i;
//     }
//     return x;
// }

//printing numbers from 1 to n
// void printNum(int n){
    
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
// }

//printing grade of student 
// char marksGrade(int marks){     
//     switch(marks){
//         case 10:return 'A';break; 
//         case 9: return 'A'; break;
//         case 8: return 'B'; break;
//         case 7: return 'C'; break;
//         case 6: return 'D'; break;
//         default: return 'E';break;
//     }
// }

//sum of even nombers upto the n
int sumofEven(int n){
    int sum=0;
    for(int i=0;i<=n;i=i+2){
        sum=sum+i;
    }
    return sum;
}


int main(){
    
    // int a,b,c;
    // cout<<"enter a: ";
    // cin>>a;
    // cout<<"enter b: ";
    // cin>>b;
    // cout<<"enter c: ";
    // cin>>c;

    int n;
    cout<<"enter the number: ";
    cin>>n;

    // int marks;
    // cout<<"enter the marks of student: ";
    // cin>>marks;

   
   
   //addition of three numbers
    // int d = sum(a,b,c);
    // cout<<"sum is : "<<d;

    //max of three numbers
    // int e = max(a,b,c);
    // cout<<"maximum number is : "<<e;

   //counting numbers from 1 to n;
    //    int f = countNum(n);
    //    cout<<"counting is: "<<f;

    //printing numbers from 1 to n
    // cout<<"printing numbers from 1 to n : ";
    // printNum(n);

    //printing grade of student
    // int h = marksGrade(marks);
    // cout<<"grade of student is: "<<h;

    //sum of even number upto n;
    int j = sumofEven(n);
    cout<<"sum of even numbers upto the  "<< n<<" is: "<<j;

    return 0;
}