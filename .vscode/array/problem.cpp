// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {

    // Write C++ code here
// vector<int>arr{1,2,1};
// vector<int>brr;
// vector<int>crr;
// for(int i=0;i<arr.size();i++){
//     for(int j=i+1;j<arr.size();j++){
//         if(arr[i]==arr[j]){
//             crr.push_back(arr[i]);
//         }
//         else{
//             brr.push_back(arr[i]);
//         }
//     }
// }
// for(int i=0;i<brr.size();i++){
//     cout<<brr[i]<<" ";
// }

//printing leader of the array

vector<int>drr{16,17,4,3,5,2};
vector<int>err;

for(int i=0;i<drr.size();i++){
    for(int j=i+1;j<drr.size();j++){
        int i;
        if(drr[i]>=drr[j]){
            cout<<drr[i];
        }
        
    }

}
// for(int i=0;i<err.size();i++){
//     cout<<err[i]<<" ";
// }


    return 0;
}