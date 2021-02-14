#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

using Matrix = std::vector<std::vector<char>>;

int getSurroundingsBlackPanel(int i, int j, Matrix v){
  int count = 0;
  if(v[i][j] == '#') ++ count;
  if(v[i][j-1] == '#') ++ count;
  if(v[i-1][j] == '#') ++ count;
  if(v[i-1][j-1] == '#') ++ count;
  return count;
}

int main(){
  int H, W;
  cin >> H >> W;
  Matrix v;
  for (int i = 0; i < H; ++i){
    std::vector<char> vc;
    for (int j = 0; j < W; ++j){
      char c;
      cin >> c;
      vc.push_back(c);
    }
    v.push_back(vc);
  }

  int point = 0;
  for (int i = 1; i < H; ++i){
    for (int j = 1; j < W; ++j){
      int blackPanel = getSurroundingsBlackPanel(i, j, v);
      if(blackPanel == 1 || blackPanel == 3) ++point;
    }
  }

  cout << point << endl;
  
  return 0;
}
