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
#define fi first
#define se second
#define ic(v,b,e) for(auto v=b;v<e;++v)
#define dc(v,e,b) for(auto v=e;v>b;--v)
#define r(x,y) {cout<<y;for(auto &xi:x)cin>>xi;}
#define w(x,y) {for(auto xi:x){cout<<xi<<y;}cout<<'\n';}
#define INF 2e18
#define MOD 1000000007

i8 n, a, b, kq=0, dem=0;
multimap<i8, short> tg;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    ic(i,0,n) {
        cin >> a >> b;
        tg.insert({a, 1});
        tg.insert({b,-1});
    }
    for(auto tgi:tg){
        dem+=tgi.se;
        kq=max(kq,dem);
    }
    cout << kq;
    return 0;
}