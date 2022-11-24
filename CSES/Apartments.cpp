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

int n, m , k, i, j, kq=0;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n >> m >> k;
    int a[n], b[m];
    for(i=0;i<n;i++) cin >> a[i];
    for(i=0;i<m;i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    i=j=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])>k){
            if(a[i]>b[j]) j++;
            else i++;
        }else{kq++; i++; j++;}
    }
    cout << kq;
    return 0;
}