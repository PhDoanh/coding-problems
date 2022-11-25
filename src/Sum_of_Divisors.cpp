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
// #define for(v,b,e,s) for(i8 v=(i8)b;v<=(i8)e;v=s)
#define INF 2e18
#define MOD 1000000007

i8 n, i, j, kq=1;

i8 calc(i8 x){
    i8 sum=1+x;
    for(j=2;j*j<=x;j++){
        if(x%j==0){
            if(j*j==x) sum=(sum+j)%MOD;
            else sum=(sum+j+x/j)%MOD;
        }
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    for(i=2;i<=n;i++) kq=(kq+calc(i))%MOD;
    cout << kq;
    return 0;
}