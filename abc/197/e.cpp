#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N;
  int X[200000];
  int C[200000];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> X[i] >> C[i];

  multimap<int, int> mp;
  for (int i = 0; i < N; ++i){
    mp.insert(make_pair(C[i], X[i]));
    //mp.emplace(C[i], X[i]);
  }

  int count = 0;
  int current = 0;
  for(auto i = mp.begin(); i != mp.end(); ++i){
    count += abs(i->second - current);
    current = i->second;
    cout << i->first << " " << i->second << " " << count << endl;
  }

  cout << count << endl;

  return 0;
}
