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

i8 n, m, hi;
multiset<i8> h;
multiset<i8>::iterator itf, itl, it;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n >> m;
    ic(i,0,n) {cin >> hi; h.insert(hi);} 
    vi8 t(m), kq(m); r(t,"");
    ic(i,0,m){
        if(!h.empty()){
            itf=h.begin();
            itl=h.end(); --itl;
            if(*itf>t[i]) {kq[i]=-1;}
            else if(*itl<t[i]) {kq[i]=*itl; h.erase(itl);}
            else{
                it=h.lower_bound(t[i]);
                if(*it!=t[i]) {
                    --it;             
                    kq[i]=*it;
                    h.erase(it);
                }else {
                    kq[i]=*it;
                    h.erase(it);
                }
            }
        }else{
            kq[i]=-1;
        }
    }
    ic(i,0,m) cout << kq[i] << '\n';
    return 0;
}