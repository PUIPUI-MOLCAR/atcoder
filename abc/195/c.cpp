#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int numOfComma(ll n){
  int cnt = 0;
  if(n < 1000) return 0;
  while(n > 0){
    n /= 1000;
    ++cnt;
  }
  return cnt;
}

int main(){
  ll N;
  cin >> N;
  if( N < 1000){
    cout << 0 << endl;
    return 0;
  }

  ll x = 1;
  int cnt = 0;
  while(x <= N){
    x *= 1000;
    ++cnt;
  }

  x /= 1000;
  --cnt;
  
  ll comma = (N - x + 1) * cnt;
  ll y = 1000;
  cnt = 1;
  while(y < x){
    comma += (999 * y) * cnt;
    y *= 1000;
    ++cnt;
  }

  cout << comma << endl;
  return 0;
}
