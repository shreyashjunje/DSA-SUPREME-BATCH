#include<bits/stdc++.h>
using namespace std;

int climbStairsUsingRecursion(int n){
    if(n==0 || n==1){
        return 1;
    }

    return climbStairsUsingRecursion(n-1)+climbStairsUsingRecursion(n-2);
}

int climbingStairsUsingTopDownApproach(int n,vector<int>&dp){
    if(n==0 || n==1){
        return 1;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]=climbingStairsUsingTopDownApproach(n-1,dp)+climbingStairsUsingTopDownApproach(n-2,dp);
    return dp[n];
}

int climbingStairspUsingBottomUp(int n){
    vector<int>dp(n+1,-1);

    dp[0]=1;
    if(n==0){
        return dp[0];
    }
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}


int main(){
    int n;
    // vector<int>dp(n+1,-1);
    cout<<"enter the steps: ";
    cin>>n;

    //  cout<<"using top down approach"<<endl;
    // cout<<climbingStairsUsingTopDownApproach(n,dp);
    // cout<<endl;

     cout<<"using bottom up approach"<<endl;
    cout<<climbingStairspUsingBottomUp(n);
    cout<<endl;

    // cout<<"using recursion"<<endl;
    // cout<<climbStairsUsingRecursion(n);
    // cout<<endl;

   
}