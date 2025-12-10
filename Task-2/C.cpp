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
int n,q;
cin>>n>>q;
vector<int>pref1(n,0),pref2(n,0),pref3(n,0);

for(int i=0;i<n;i++){
    int id;
    cin>>id;
if(id==1){
    pref1[i]=1;

}
else if(id==2){
    pref2[i]=1;
}
else{
    pref3[i]=1;
}
}
for(int i=1;i<n;i++){
    pref1[i]+=pref1[i-1];
    pref2[i]+=pref2[i-1];
    pref3[i]+=pref3[i-1];
}

while(q--){
    int l,r;
    cin>>l>>r;
l--;
r--;
if(l==0){
    cout<<pref1[r]<<' '<<pref2[r]<<' '<<pref3[r]<<'\n';
}
else{
cout<<pref1[r]-pref1[l-1]<<' '<<pref2[r]-pref2[l-1]<<' '<<pref3[r]-pref3[l-1]<<'\n';
}

}
}
signed main() {
    fast;
    UseFile();

 solve();
    return 0;
}
