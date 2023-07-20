#include<iostream>
#include<vector>
using namespace std;

//fumction for finding sum of array
// int sumofArray(vector<int>arr){
//     int sum=0;
//     for(int i=0;i<arr.size();i++){
//         sum = sum + arr[i];

//     }
//     return sum;
// }

//function for finding index value a their right index 
//  void indexvalue(vector<int>arr){
//     int i;
//     for(int i=0;i<arr.size();i++){
//          if(arr[i]==i){
//            cout<<arr[i]<<" ";
//      }
//     }
// }

//printing the alternate value of an array
// void alternatevalue(vector<int>arr){
//     int i;
//     for(int i=0;i<arr.size();i=i+2){
//        cout<<arr[i]<<" ";

//     }
// }

//printing numbers less than given key
// int printlessnumber(vector<int>arr,int key){
//     int count=0;
//     // int key;

//     for(int i=0;i<arr.size();i++){
//       if(arr[i]<key){
//         count=count+1;
//       }
           

//     }
//         return count;

// }

//finding whether given array is perfect or not
bool perfectarray(vector<int>arr){
    int n;
    int start=0;
    int end=n-1;
    
            while(start>=end){
                if(arr[start]==arr[end]){
                    return true;
                    // start++;
                    // end--;
                }
                 return false;
            }
           
        }
    



int main(){
    int n;
    cin>>n;
    // int key;
    // cin>>key;
    vector<int>arr(n);
    
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    // int findsumofarray=sumofArray(arr);
    // cout<<"sum of array is : "<<findsumofarray;
   
//    int findindexvalueasindex=indexvalue(arr);
//    cout<<"value present at their right index is : ";
//    indexvalue(arr);

    // cout<<"printing alternate value of an array : ";
    // alternatevalue(arr);

    // int printinglessnumberthankey=printlessnumber(arr,key);
    // cout<<"printing elements less than given key is : "<< printinglessnumberthankey;
   
//    int findperfectarray=perfectarray(arr);
//    cout<<"the given array is "<<findperfectarray;

   if(perfectarray(arr)){
    cout<<"perfect";
   }
   else{
    cout<<"not perfect";
   }

}