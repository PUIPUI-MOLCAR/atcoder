#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N;
  cin >> N;
  int a[110];
  for (int i = 0; i < N; ++i) cin >> a[i];

  sort(a, a + N, greater<>());

  int alice = 0;
  int bob = 0;
  for (int i = 0; i < N; ++i){
    if(i % 2 == 0){
      alice += a[i];
    } else {
      bob += a[i];
    }
  }
  
  cout << alice - bob << endl;
  return 0;
}
