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
#define count_bits(x) (64-__builtin_clzll(x))
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define popCnt(x) (__builtin_popcountll(x))
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void UseFile(){
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
}
#define sort_by_second_element sort(v.begin(), v.end(), [](auto &a, auto &b){ return a.second < b.second; });
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
/*
int t;
cin>>t;
while(t--){}
*/
int n;
cin>>n;
vector<int>v(n),pref(n,0),suff(n,0);
 for(int i=0;i<n;i++){
  cin>>v[i];  }
pref[0]=v[0];
//pref for gcd
  for(int i=1;i<(int)v.size();i++){
    pref[i]=gcd(pref[i-1],v[i]);
  }
  suff[n-1]=v[n-1];
  for(int i=n-2;i>=0;i--){
    suff[i]=gcd(suff[i+1],v[i]);
  }
  int res=suff[1];
  for(int i=1;i<(int)v.size()-1;i++){
   int val=__gcd(pref[i-1],suff[i+1]);
res=max(res,val);
  }
  res=max(res,pref[n-2]);
cout<<res<<endl;
}
signed main() {
    fast;
    //UseFile();

 solve();
    return 0;
}
