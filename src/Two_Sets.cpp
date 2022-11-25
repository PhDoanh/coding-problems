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

i8 n, i, dem=0;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    i8 sum=(1+n)*n/2;
    bool sets[n]={};
    if(sum&1) cout << "NO";
    else{
        sum/=2;
        for(i=n-1;i>=0;i--){
            sum-=i+1; sets[i]=1; dem++;
            if(sum<i+1) {
                if(sum) {dem++; sets[sum-1]=1; break;}
                else break;
            }
        }
        cout << "YES" << '\n';
        cout << dem << '\n';
        for(i=0;i<n;i++) if(sets[i]) cout << i+1 << ' ';
        cout << '\n' << n-dem << '\n';
        for(i=0;i<n;i++) if(!sets[i]) cout << i+1 << ' '; 
    }
    return 0;
}