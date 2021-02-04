#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N;
  cin >> N;
  int d[110];
  int bucket[110] = {};
  for (int i = 0; i < N; ++i) cin >> d[i];

  for (int i = 0; i < N; ++i){
    ++bucket[d[i]];
  }

  int res = 0;
  for (int i = 1; i <= 100; ++i){
    if(bucket[i] != 0) ++res;
  } 
  
  cout << res << endl;
  return 0;
}
