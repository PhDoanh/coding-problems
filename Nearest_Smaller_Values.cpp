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

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    i8 n, i=1; cin >> n;
    stack<pair<i8,i8>> stk;
    vi8 x(n), kq(n); kq[0]=0; 
    r(x, "");
    stk.push({x[0], 1});
    while(i<n){
        if(stk.empty()) {
            stk.push({x[i], i+1});
            kq[i]=0; 
            ++i;
        }
        if(x[i]>stk.top().fi){
            kq[i]=stk.top().se;
            stk.push({x[i], i+1});
            ++i;
        }else stk.pop();
    }
    w(kq,' ');
    return 0;
}