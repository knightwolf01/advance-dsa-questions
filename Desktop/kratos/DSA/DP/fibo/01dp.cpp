#include <bits/stdc++.h>
using namespace std;

//this is top down approach 
int fibo(int n,vector<int>&dp){
    if(n<=1) return n;
    //if already calculated 
    if(dp[n]!=-1) return dp[n];
    
    return dp[n] = fibo(n-1,dp)+fibo(n-2,dp);
}

int fib(int n){
    vector<int> dp(n+1,-1);
    return fibo(n,dp);
}

int main(){
    cout<<fib(10);

    return 0;
}