#include<iostream>
using namespace std;

int main(){
    int rowCount,colCount;
    cin>>rowCount;

    
    //half pyramid
    //    for(int i=0;i<rowCount;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
       
    //     cout<<endl;
    // }

    //inverted halpf pyramid
    //  for(int i=0;i<rowCount;i++){
    //     for(int j=0;j<rowCount-i;j++){
    //         cout<<"* ";
    //     }
       
    //     cout<<endl;
    // }
    // //numerical half pyramid
    //    for(int i=0;i<rowCount;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1;
    //     }
       
    //     cout<<endl;
    // }
    //inverted halpf pyramid
    //  for(int i=0;i<rowCount;i++){
    //     for(int j=0;j<rowCount-i;j++){
    //         cout<<j+1;
    //     }
       
    //     cout<<endl;
    // }

    //full pyramid

    // for(int i=0;i<rowCount;i++){
        
    //    for(int j=0;j<rowCount-i-1;j++){
    //         cout<<" ";
    //    }

    //    for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //    }
    //    cout<<endl;
    // }


    // inverted full pyramid

    // for(int i=0;i<rowCount;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //    }
    //    for(int j=0;j<rowCount-i;j++){
    //         cout<<"* ";
    //    }

       
    //    cout<<endl;
    // }
    

    //solid diamond
    // for(int i=0;i<rowCount;i++){
        
    //    for(int j=0;j<rowCount-i-1;j++){
    //         cout<<" ";
    //    }

    //    for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //    }
    //    cout<<endl;
    // }
    // for(int i=0;i<rowCount;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //    }
    //    for(int j=0;j<rowCount-i;j++){
    //         cout<<"* ";
    //    }
    //    cout<<endl;
    // }


    //hollow diamond
    for(int i=0;i<rowCount;i++){
       for(int j=0;j<rowCount-i-1;j++){
        cout<<" ";
       }
       for(int j=0;j<2*i+1;j++){
        if(j==0 || j==2*i){
            cout<<"*";
        }else{
                cout<<" ";
        }
       }
       cout<<endl;
    }
     
     for(int i=0;i<rowCount;i++){
       for(int j=0;j<i;j++){
        cout<<" ";
       }
       for(int j=0;j<2*rowCount-2*i-1;j++){
        if(j==0 || j==2*rowCount-2*i-2){
            cout<<"*";
        }else{
            cout<<" ";
        }
       }
       cout<<endl;
    }

}