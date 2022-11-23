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
#define MAX 10000001

int n, x, i, j, spf[MAX];

void seive(){
    spf[1]=1;
    for(i=2;i<MAX;i++) spf[i]=i;
    for(i=4;i<MAX;i+=2) spf[i]=2;
    for(i=3;i*i<MAX;i++){
        if(spf[i]==i){
            for(j=i*i;j<MAX;j+=i)
                if(spf[j]==j) spf[j]=i;
        }
    }
}

int numOfDivs(int x){
    int count=1;
    map<int, int> stat;
    while(x!=1){
        stat[spf[x]]++;
        x/=spf[x];
    }
    for(auto st:stat) count*=st.second+1;
    return count;
}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    seive();
    cin >> n; int kq[n];
    for(i=0;i<n;i++) {cin >> x; kq[i]=numOfDivs(x);}
    for(i=0;i<n;i++) cout << kq[i] << '\n';
    return 0;
}