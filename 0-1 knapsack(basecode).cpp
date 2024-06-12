
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define INF (1LL<<62)
#define N 2000006

int n;
int w[N], v[N];

ll dp[105][100005];

ll f(int indx, int rem){
    if(indx==n) return 0;

    if(dp[indx][rem]!=-1) return dp[indx][rem];

    ll res = -INF;
    res = max(res, f(indx+1, rem));
    if(rem>=w[indx]) res = max(res, v[indx]+f(indx+1, rem-w[indx]));

    return dp[indx][rem] = res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int W;
    cin >> n >> W;
    for(int i = 0; i < n; i++){
        cin >> w[i] >> v[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << f(0, W) << '\n';

    return 0;
}
