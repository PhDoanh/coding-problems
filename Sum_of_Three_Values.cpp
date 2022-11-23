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

i8 n, x, x2, sum, i, j, k;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n >> x;
    vector<pair<i8,i8>> a(n);
    for(i=0;i<n;i++) {cin >> a[i].fi; a[i].se=i+1;}
    sort(a.begin(), a.end());
    for(i=0;i<n;i++){
        x2=x-a[i].fi;
        for(j=i+1, k=n-1;j<k;j++){
            while(a[j].fi+a[k].fi>x2) --k;
            if(j<k && a[j].fi+a[k].fi==x2) {
                cout << a[i].se << ' ' << a[j].se << ' ' << a[k].se;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}