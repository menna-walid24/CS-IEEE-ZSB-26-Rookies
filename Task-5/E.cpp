/*
                          بِسْمِ اللَّـهِ الرَّحْمَـ ٰنِ الرَّحِيمِ 
            
*/
#include<iostream>
using namespace std;
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define msb(x) 63ll - __builtin_clzll(x)
#define popCnt(x) (__builtin_popcountll(x))
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define By_menna ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void UseFile(){freopen("ProblemName.in", "r", stdin);}
#define lsb(x) __builtin_ffsll(x) - 1ll
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
const int MOD = 1e3 + 7;
const ll INF = 1e18;
const int N = 1e5 + 5;
#define pii pair<int,int>
int safe_sqrt(int n) {
    if (n <= 0) return 0;
    int res = sqrtl(n);
   
    while ((res + 1) * (res + 1) <= n) res++;
    while (res * res > n) res--;
    return res;
}
int LIS(vector<int>& a) {
    int n = a.size();
    vector<int> dp(n, 1);
    int ans = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}
#define nl endl
/*
Author menna
int n;
cin>>n;
vector<int>v(n);
 for(int i=0;i<n;i++){
  cin>>v[i];  }
  */ 
/*

*/
bool is_on(int n,int bit){
    return n&(1ll<<bit);
}
bool is_off(int n,int bit){
    return n&(!(1ll<<bit));
}
int set2(int n,int bit){
    return n|(1ll<<bit);
}
void Yarab_ACC(){
   int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
if(msb(a)<msb(b)){
    cout<<-1<<nl;
}
else{
    int num=0; 
    int val=(a^b);
    if(val<=a){
        cout<<1<<nl;
        cout<<val<<nl;
    }
   else{
   
    int len=msb(a);
    //zero-based
    num=(1ll<<(len+1))-1;
    cout<<2<<endl;
    
    cout<<(a^num)<<' '<<(b^num)<<nl;
}}
}
}
signed main() {
  By_menna
    //UseFile();
 Yarab_ACC();
    return 0;
}
