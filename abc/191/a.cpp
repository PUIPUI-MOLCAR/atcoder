#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int V, T, S, D;
  cin >> V >> T >> S >> D;

  if(V * T <= D && D <= V * S) cout << "No" << std::endl;
  else cout << "Yes" << std::endl;
  
  return 0;
}
