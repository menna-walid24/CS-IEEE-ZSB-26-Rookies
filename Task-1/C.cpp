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
void UseFile(){freopen("ProblemName.in", "r", stdin);}
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
//from 1 to n 
int res=((n+1)*n)/2;
if(res&1){
cout<<"NO\n";
return;
}
else{

map<int,bool>mp;
int sum=res/2;
vector<int>val1,val2;
int curr=0;
for(int i=n;i>=1;--i){
if((curr+i)<=sum){
    curr+=i;
    val1.pb(i);
    mp[i]=true;
}
}
for(int i=1;i<=n;i++){
    if(mp[i]==false){
        val2.pb(i);
        mp[i]=true;
    }
}
yes
cout<<val1.size()<<endl;
for(auto x:val1){
    cout<<x<<' ';
}
cout<<endl<<val2.size()<<'\n';
for(auto x:val2){
    cout<<x<<' ';
}
cout<<endl;
}

}
signed main() {
    fast;
    //UseFile();

 solve();
    return 0;
}
