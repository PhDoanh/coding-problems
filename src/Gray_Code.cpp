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

vector<string> genCode(short n){
    vector<string> ans;
    if(n==1){
        ans.eb("0");
        ans.eb("1");
        return ans;
    }
    vector<string> preAns = genCode(n-1);
    int len=preAns.size();
    for(int i=0;i<len;i++) ans.eb("0"+preAns[i]);
    for(int i=len-1;i>=0;i--) ans.eb("1"+preAns[i]);
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    short n; cin >> n;
    vector<string> kq;
    kq=genCode(n);
    for(auto kqi:kq) cout << kqi << '\n';
    return 0;
}