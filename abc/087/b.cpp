#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int A,B,C,X;
  cin >> A >> B >> C >> X;

  int ways = 0;
  for (int i = 0; i <= A; ++i){
    for (int j = 0; j <= B; ++j) {
      for (int k = 0; k <= C; ++k) {
        if(X == 500 * i + 100 * j + 50 * k) ++ways;
      }
    }
  }

  cout << ways << endl;
  return 0;
}
