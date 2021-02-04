#include<bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  ll N;
  cin >> N;
  while(N%2 == 0){
    N /= 2;
  }
  int count = 0;
  for (ll i = 1; i * i <= N; ++i){
    if(N%i == 0){
      if(i * i == N) ++count;
      else count += 2;
    }
  }
  cout << count * 2 << endl;
  return 0;
}
