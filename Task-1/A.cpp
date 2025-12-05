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

bool isprime(ll x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}
 


void solve(){
/*
int t;
cin>>t;
while(t--){}
*/
int n,q,w;
cin>>w>>n;
vector<int>v(n);
 for(int i=0;i<n;i++){
  cin>>v[i];  }
cin>>q;
map<int,int>mp;
while(q--){
    int query;
    cin>>query;
    query--;
 //   cout<<query<<' '<<mp[query]
    if(mp[query]!=0){
        // used before
        w-=v[query];
        mp[query] = 0;
        cout<<w<<endl;
    }
    else{
        //if not used before
        w+=v[query];mp[query]++;
        cout<<w<<endl;
    }
}


}
signed main() {
    fast;
    //UseFile();

 solve();
    return 0;
}
