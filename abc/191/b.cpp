#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N, X;
  cin >> N >> X;
  vector<int> v(N);
  for (int i = 0; i < N; ++i) cin >> v[i];

  auto itrNewEnd = remove_if(v.begin(), v.end(), [&](int i){return i == X;});
  v.erase(itrNewEnd, v.end());

  for(int i = 0; i < v.size(); ++i){
    cout << (i ? " " : "" ) << v[i];
  }
  
  cout << endl;
  return 0;
}
