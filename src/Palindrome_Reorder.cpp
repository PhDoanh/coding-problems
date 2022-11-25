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

int i, odd=0, n;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    string a, kq, oddstr; cin >> a;
    map<char, int> stat;
    for(i=0;a[i];i++) stat[a[i]]++;
    for(auto st:stat) {
        if(st.second&1) {odd++; oddstr=string(st.second/2+1, st.first);}
        else kq+=string(st.second/2, st.first);
        if(odd>1) {cout << "NO SOLUTION"; return 0;}
    }
    kq+=oddstr;
    if(a.size()&1) n=kq.size()-2;
    else n=kq.size()-1; 
    for(i=n;kq[i];i--) kq+=kq[i];
    cout << kq;
    return 0;
}