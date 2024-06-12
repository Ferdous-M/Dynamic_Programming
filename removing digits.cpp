
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define INF (1<<30)
#define N 2000006

// dp solution must be memoized
// don't forget to memoize

int f(int n){
    if(n==0){
        return 0;
    }

    int res = INF;

    int tmp = n;
    while(tmp>0){
        int d = tmp%10;
        tmp /= 10;

        if(d!=0){
            res = min(res, 1+f(n-d));
        }
    }

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    cout << f(n) << '\n';

    return 0;
}
