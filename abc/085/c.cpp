#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N, Y;
  cin >> N >> Y;

  int bill1 = 10000;
  int bill2 = 5000;
  int bill3 = 1000;

  bool flag = false;
  int i,j,k;
  for (i = 0; i <= N; ++i){
    for (j = 0; i + j <= N; ++j){
      k = N - i - j;
      if(bill1 * i + bill2 * j + bill3 * k == Y){
        flag = true;
      }
      if(flag) break;
    }
    if(flag) break;
  }

  if(!flag){
    i = j = k = -1;
  } 
    cout << i << " " << j << " " << k << endl;
  
  return 0;
}
