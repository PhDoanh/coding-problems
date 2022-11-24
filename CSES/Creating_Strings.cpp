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

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    string a, b; cin >> a;
    sort(a.begin(), a.end());
    vector<string> kq{a};
    while(1){
        next_permutation(a.begin(), a.end());
        if(kq[0]==a) break;
        else kq.eb(a);
    }
    cout << kq.size() << '\n';
    for(i, 0, kq.size()-1, i+1) cout << kq[i] << '\n';

    return 0;
}