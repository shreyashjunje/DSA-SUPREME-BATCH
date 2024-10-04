#include<bits/stdc++.h>
using namespace std;

void solveUsingRecursion(vector<int>&nums,int i,int amount,int& maxmoney){
    if(i>=nums.size()){
        maxmoney=max(maxmoney,amount);
        return;
    }

    solveUsingRecursion(nums,i+1,amount,maxmoney);

    amount+=nums[i];
    solveUsingRecursion(nums,i+2,amount,maxmoney);
}

// int solveUsingTopDownApproach(vector<int>&nums,int i,int amount,int maxmoney,vector<int>&dp){
    if(i>=nums.size()){
        // maxmoney=max(maxmoney,amount);
        return maxmoney;
    }

    if(dp[i]!=INT_MIN){
        return dp[i];
    }

    int ans1=solveUsingTopDownApproach(nums,i+1,amount,maxmoney,dp);
    amount+=nums[i];
    int ans2=solveUsingTopDownApproach(nums,i+2,amount,maxmoney,dp);

    dp[i]= max(ans1,ans2);
     maxmoney=dp[i];
     return dp[i];


}

int RobMoney(vector<int>&nums){
    int i=0;
    int amount=0;
    int maxmoney=INT_MIN;
    // vector<int>dp(nums.size()+1,INT_MIN);
    solveUsingRecursion(nums,i,amount,maxmoney);
    // int ans=solveUsingTopDownApproach(nums,i,amount,maxmoney,dp);
    // return ans;
    return maxmoney;
}

int main(){
    vector<int>nums{1,2,3,1};

    cout<<"solve using recursion: ";
    cout<<RobMoney(nums);
    cout<<endl;

}