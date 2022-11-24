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

i8 n, x, k;
map<i8, pair<i8,i8>> preSums;
map<i8, pair<i8,i8>>::iterator it;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n >> x;
    vi8 a(n); r(a, "");
    ic(i, 0, n-1){
        ic(j, i+1, n){
            it=preSums.find(x-a[i]-a[j]);
            if(it!=preSums.end()){
                cout << i+1 << ' ' << j+1 << ' ' << it->se.fi << ' ' << it->se.se;
                return 0;
            }
        }
        if(i!=0){
            k=i-1;
            while(k>=0) {preSums.insert({a[k]+a[i], {k+1,i+1}}); --k;}
        }
    }  
    cout << "IMPOSSIBLE";
    return 0;
}