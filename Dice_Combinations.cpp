#include <bits/stdc++.h> 

using namespace std;
using i8=long long;
using f16=long double;
using pi4=pair<long,long>;
using pf8=pair<double,double>;
using vi8=vector<i8>;
using vi=vector<int>;
using vvi=vector<vector<int> >;
using vvi8=vector<vector<i8> >;
using vvpi4=vector<vector<pi4> >;
using vpi4=vector<pi4>;

#define mp make_pair
#define eb emplace_back
#define pb pop_back
#define for(v,b,e,s) for(i8 v=(i8)b;v<=(i8)e;v=s)
#define INF 2e18
#define MOD 1000000007

i8 numOfWays(i8 n){
    if(n<0) return 0;
    if(n==0) return 1;
    i8 kq=0; vi8 dp(n+1, -1);
    if(dp[n]!=-1) return dp[n];
    for(i, 1, n, i+1) kq=(kq+numOfWays(n-i))%MOD;
    return dp[n]=kq;
}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    i8 n; cin >> n;
    cout << numOfWays(n);
    return 0;
}