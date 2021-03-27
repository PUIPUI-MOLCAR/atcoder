#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int A,B;
  cin >> A >> B;
  int C = A + B;
  int ret;
  
  if(C >= 15 && B >= 8) ret = 1;
  else if(C >= 10 && B >= 3) ret = 2;
  else if(C >= 3) ret = 3;
  else ret = 4;

  cout << ret << endl;

  return 0;
}
