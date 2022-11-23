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
#define MOD 998244353

short n;
i8 i, j;

i8 bitMasking(short n, i8 p[]){
    i8 kq=LONG_LONG_MAX;
    for(i=0;i<(1<<n);i++){
        i8 grp1=0, grp2=0;
        for(j=0;j<n;j++){
            if(i&(1<<j)) grp1+=p[j];
            else grp2+=p[j];
        }
        kq=min(kq, abs(grp1-grp2));
    }
    return kq;
}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    i8 p[n];
    for(i=0;i<n;i++) cin >> p[i];
    cout << bitMasking(n, p);
    return 0;
}