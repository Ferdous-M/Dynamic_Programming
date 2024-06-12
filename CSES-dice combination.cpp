#include <bits/stdc++.h>
using namespace std;

const int N=1e6,mod=1e9+7;
int dp[N];
bool already_counted[N];


int f(int n){
    if(n<0)return 0;
    if(n==0)return 1;
    if(already_counted[n]){
        return dp[n];
    }
    dp[n]=(f(n-1)+f(n-2))%mod;
    dp[n]=(dp[n]+f(n-3))%mod;
    dp[n]=(dp[n]+f(n-4))%mod;
    dp[n]=(dp[n]+f(n-5))%mod;
    dp[n]=(dp[n]+f(n-6))%mod;
    already_counted[n]=true;
    return dp[n];
    
}

int main()
{
    int n;cin>>n;
    cout<<f(n)<<endl;

    return 0;
}
