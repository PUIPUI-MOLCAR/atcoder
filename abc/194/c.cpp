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
  int A[300010];
  for (int i = 0; i < N; ++i) cin >> A[i];

  ll sum_Ai = 0;
  ll sum_sqAi = 0;

  for (int i = 0; i < N; ++i){
    sum_Ai += A[i];
    sum_sqAi += A[i] * A[i];
  }
  
  cout << N * sum_sqAi - sum_Ai * sum_Ai << endl;
  return 0;
}
