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
  vector<int> h;
  for (int i = 0; i < N; ++i){
    int d;
    cin >> d;
    h.push_back(d);
  }

  int count = 0;
  while (true)
  {
    bool flag = true;
    for(int i : h){
      if(i != 0){
        flag = false;
        break;
      }
    }
    if(flag) break;
    int l,r;
    for (l = 0; l < N && h[l] == 0; ++l);
    for (r = l; r < N && h[r] > 0; ++r);
    for(int i = l; i < r; ++i){
      --h[i];
    }
    ++count;
  }
  cout << count << endl;
  
  return 0;
}
