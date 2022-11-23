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
#define ull unsigned long long

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    ull t, x, y; cin >> t;
    ull kq[t]={};
    for(ull i=0;i<t;i++){
        cin >> y >> x;
        if(x<y){
            if(y&1) kq[i]=(y-1)*(y-1)+x;
            else kq[i]=y*y-x+1;
        }else if(x>y){
            if(x&1) kq[i]=x*x-y+1;
            else kq[i]=(x-1)*(x-1)+y;
        }else kq[i]=x*x-x+1;
    }
    for(ull i=0;i<t;i++) cout << kq[i] << '\n';
    return 0;
}