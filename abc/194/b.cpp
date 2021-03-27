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
  int A[100010];
  int B[100010];

  for (int i = 0; i < N; ++i) cin >> A[i] >> B[i];

  int ret = 1000000;
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N; ++j){
      if(i == j){
        if(ret >= A[i] + B[i]) ret = A[i] + B[i];
      } else {
        if(ret >= max(A[i], B[j])) ret = max(A[i], B[j]);
      }
    }
  }
  
  cout << ret << endl;
  return 0;
}
