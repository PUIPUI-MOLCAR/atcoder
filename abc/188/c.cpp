#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int power(int n, int exp){
  int x = 1;
  for (int i = 0; i < exp; ++i){
    x *= n;
  }
  return x;
}

int main(){
  int N;
  cin >> N;
  int NUMMAX = power(2, N);
  vector<int> A(NUMMAX);
  for (int i = 0; i < NUMMAX; ++i) cin >> A[i];
  vector<bool> isAlive(NUMMAX, true);

  int l,r;
  for (int i = 0; i < N; ++i){
    l = 0;
    r = -1;
    int num = power(2, N - i);
    for (int j = 0; j < num/2 ; ++j){
      for(l = r + 1; isAlive[l] == false && l < NUMMAX; ++l);
      for(r = l + 1; isAlive[r] == false && r < NUMMAX; ++r);
      if(A[l] < A[r]) isAlive[l] = false;
      else isAlive[r] = false;
    }
  }

  if(isAlive[l]) cout << r+1 << endl;
  else cout << l+1 << endl;
  
  return 0;
}
