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

i8 i, j, ci, cj;
vector<string> rows(8);
vector<vector<bool>> board(8, vector<bool>(8, 0));

i8 backTracking(vector<vector<bool>> b){
    i8 dem=0; i=j=0;
    while(1){
        while(b[i][j]) j++;
        ci=i; cj=j;
        while(i<8 && j<8 && !b[i][j]){
            while(i<8) {b[i][j]=1; i++;} // mark col
            i=ci;
            while(j<8) {b[i][j]=1; j++;} // mark row
            j=cj;
            while(j>0 && i<8) {b[i][j]=1; i++; j--;}
            while(i<8 && j<8) {b[i][j]=1; i++; j++;} // mark diagonal

        }
        j=0; i++;
    }

}

int main(){
    ios_base::sync_with_stdio(0); cout.tie(NULL); cin.tie(NULL);
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    for(i=0;i<8;i++) cin >> rows[i];
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(rows[i][j]=='*') board[i][j]=1;
        }
    }
    cout << backTracking(board);
    return 0;
}