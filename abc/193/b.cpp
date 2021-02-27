#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N;
  cin >> N;
  int A[N];
  ll P[N];
  int X[N];
  for (int i = 0; i < N; ++i){
    cin >> A[i] >> P[i] >> X[i];
  }

  ll price = 10000000000;
  for (int i = 0; i < N; ++i){
    if(X[i] - A[i] > 0) price = min(price, P[i]);
  }

  if(price == 10000000000) cout << -1 << endl;
  else cout << price << endl;
  
  return 0;
}
