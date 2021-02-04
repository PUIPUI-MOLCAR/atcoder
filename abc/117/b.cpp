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
  vector<int> L;
  for (int i = 0; i < N; ++i){
    int n;
    cin >> n;
    L.push_back(n);
  }
  sort(L.begin(), L.end());
  
  int sum = accumulate(L.begin(), L.end() - 1, 0);
  if(sum > L.back()) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}
