#include<iostream>
#include<vector>
using namespace std;

    void sortColors(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int m=0;
        
        while(m<=h){
             if(nums[m]==0){
                swap(nums[m],nums[l]);
                m++;
                l++;
                

            }else if(nums[m]==1){
                m++;
            }else{
               swap(nums[m],nums[h]);
               h--;

            }
        }
    }

int main(){
    vector<int>nums{0,2,0,1,2,1,0,2,1,0,2,1,0,2};
    sortColors(nums);
    for(int i=0;i<nums.size()-1;i++){
        cout<<nums[i]<<" ";
    }
}