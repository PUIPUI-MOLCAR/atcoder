#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N, S, D;
  cin >> N >> S >> D;
  int X[110], Y[110];
  for (int i = 0; i < N; ++i){
    cin >> X[i] >> Y[i];
  }
  int flag = false;
  for (int i = 0; i < N; ++i){
    if(X[i] < S && Y[i] > D) flag = true;
  }
  
  if(flag){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
