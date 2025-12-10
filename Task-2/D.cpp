/*
                          بِسْمِ اللَّـهِ الرَّحْمَـ ٰنِ الرَّحِيمِ 
*/
//version new
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

int n;
cin>>n;
vector<int>v(n);
 for(int i=0;i<n;i++){
  cin>>v[i];  }
  int q;
  cin>>q;
  vector<int>prefix(n+10,0);
  prefix[0]=v[0];
  for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+v[i];
  }
  vector<int>res=v;
  sort(all(res));
  vector<int>pref(n+10,0);
pref[0]=res[0];
  for(int i=1;i<n;i++){
    pref[i]=pref[i-1]+res[i];
  }
  while(q--){
    int type,l,r;
    cin>>type>>l>>r;
    l--;r--;
    if(type==1){
          if(l == 0) cout << prefix[r] << endl;
else cout<<prefix[r]-prefix[l-1]<<endl;
    }
    else{
          if(l == 0) cout << pref[r] << endl;
else cout<<pref[r]-pref[l-1]<<endl;
    }
  }

}
signed main() {
    fast;
    //UseFile();
 solve();
    return 0;
}
