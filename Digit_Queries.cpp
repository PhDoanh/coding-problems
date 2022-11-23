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

i8 q, k, i, j=0, noc, non, n;
vi8 idxs = {1};

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> q;
    char kq[q];
    for(i=0;i<q;i++){
        cin >> k;
        if(k<idxs.back()){
            noc=k-idxs[idxs.size()-2]+1;
            non=noc/(idxs.size()-1);
            non=(noc%(idxs.size()-1)==0)?non:non++;
            

        }else{
            idxs.eb(idxs.back()+(9*pow(10,j)*(j+1)));
            j++;
        }
    }
    for(i=0;i<q;i++) cout << kq[i] << '\n';
    return 0;
}