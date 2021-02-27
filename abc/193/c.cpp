#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int exp(int x, int e){
  int res = 1;
  for (int i = 0; i < e; ++i){
    res *= x;
  }
  return res;
}

int main(){
  ll N;
  cin >> N;
  unordered_set<ll> expressible;

  int rtN = sqrt(N) + 1;

  for (ll a = 2; a * a <= N; ++a){
    ll e = a * a;
    while(e <= N){
      expressible.insert(e);
      e *= a;
    }
  }

  cout << N - expressible.size() << endl;
  
  return 0;
}
