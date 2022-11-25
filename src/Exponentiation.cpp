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
#define MOD 1000000007
#define ui8 unsigned long long

ui8 n, a, b, i;

int mod(int a, int m){
	return (a % m + m) % m;
}

ui8 Exp(ui8 a, ui8 b){
    if(a==0&&b==0) return 1;
    ui8 c=1;
    while(b--) c*=mod(a,MOD);
    return c%MOD;
}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    ui8 kq[n];
    for(i=0;i<n;i++){
        cin >> a >> b;
        kq[i]=Exp(a,b);
    }
    for(i=0;i<n;i++) cout << kq[i] << '\n';
    return 0;
}