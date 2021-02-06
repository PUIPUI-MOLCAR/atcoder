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
  vector<int> A,B;
  for (int i = 0; i < N; ++i){
    int a;
    cin >> a;
    A.push_back(a);
  }
  for (int i = 0; i < N; ++i){
    int b;
    cin >> b;
    B.push_back(b);
  }

  int total = 0;
  for (int i = 0; i < N; ++i){
    total += A[i] * B[i];
  }
  
  if(total == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
