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
#define MOD 998244353

void towerOfHanoi(short n, short l, short r, short m){
    if(n==1) {cout << l << ' ' << r << '\n';return;}
    towerOfHanoi(n-1, l, m, r);
    cout << l << ' ' << r << '\n';
    towerOfHanoi(n-1, m, r, l);
}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    short n; cin >> n;
    cout << pow(2,n)-1 << '\n';
    towerOfHanoi(n, 1, 3, 2);
    return 0;
}