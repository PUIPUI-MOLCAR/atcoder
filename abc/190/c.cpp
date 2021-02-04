#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N, M;
  cin >> N >> M;
  int A[110], B[110];
  for (int i = 0; i < M; ++i) cin >> A[i] >> B[i];
  int K;
  cin >> K;
  int C[17], D[17];
  for (int i = 0; i < K; ++i) cin >> C[i] >> D[i];
  
  for (int i = 0; i < M; ++i){
    --A[i];
    --B[i];
  }
  for (int i = 0; i < K; ++i){
    --C[i];
    --D[i];
  }
  long long count = 0;
  long long MAX = 0b1 << K;
  int greatest_score = 0;
  //cout << MAX;
  while(count <= MAX){
    int bucket[110] = {};
    for (int i = 0; i < K; ++i){
      if(count & (1 << i)){
        ++bucket[D[i]];
      } else {
        ++bucket[C[i]];
      }
    }

    int total = 0;
    for (int i = 0; i < M; ++i){
      if(bucket[A[i]] > 0 && bucket[B[i]] > 0) ++total;
    }

    if(total > greatest_score) greatest_score = total;
    ++count;
  }

  cout << greatest_score << endl;
  return 0;
}
