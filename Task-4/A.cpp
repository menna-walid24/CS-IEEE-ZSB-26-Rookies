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
#define popCnt(x) (__builtin_popcountll(x))
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void UseFile(){freopen("ProblemName.in", "r", stdin);}
/*
int n;
cin>>n;
vector<int>v(n);
 for(int i=0;i<n;i++){
  cin>>v[i];  }
  */ 
/*

*/
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
const int MOD = 1e3 + 7;
const ll INF = 1e18;
const int N = 1e5 + 5;
#define pii pair<int,int>

void solve(){
    /*int t;
cin>>t;
while(t--){}*/
int n,k;
cin>>n>>k;
vector<int>v(n);
for(auto &i:v)cin>>i;

int l=0,r=0, sum=v[0];
int ans=0;
while(r<n){
while(sum>k){
    sum-=v[l]; 
    l++;
   
}
ans=max(ans,r-l+1);
r++;
    sum+=v[r];
    

}
cout<<ans<<'\n';

}

signed main() {
    fast;
    //UseFile();

 solve();
    return 0;
}
