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

i8 n, i=0, j=0, idx, dem=1;
set<i8> st;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    i8 k[n];
    for(idx=0;idx<n;idx++) cin >> k[idx];
    while(i<n && j<n){
        while(j<n && !st.count(k[j])){
            st.insert(k[j]);
            if(j-i+1>dem) dem=j-i+1;
            j++;
        }
        while(j<n && st.count(k[j])){
            st.erase(k[i]);
            i++;
        }
    }
    cout << dem;
    return 0;
}