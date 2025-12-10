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
vector<ll> primes = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
    53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
    127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199,
    211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293,
    307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,
    401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499,
    503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631,
    641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};
bool isprime(ll x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}
 
void gen() {
    ll mul = 1;
    bool is = false;
    for (ll i = 2;  primes.size() <= 20; ++i) {
        if (isprime(i)) {
            primes.push_back(i);
        }
    }
}


void solve(){
/*
int t;
cin>>t;
while(t--){}
*/
int n,q;
cin>>n>>q;
vector<int>v(n);
 for(int i=0;i<n;i++){
  cin>>v[i];  }
  vector<int>prefix(n);
  prefix[0]=v[0];
  for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+v[i];
  }
while(q--){
    int x,y;
    cin>>x>>y;
    x--;
    y--;
    if(x==0){
        cout<<prefix[y]<<endl;

    }
    else{
        cout<<prefix[y]-prefix[x-1]<<endl;
    }
}

}
signed main() {
    fast;
    //UseFile();

 solve();
    return 0;
}
