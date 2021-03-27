#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  --X;
  --Y;
  string s[100];
  for (int i = 0; i < H; ++i) cin >> s[i];

  int count = 1;

  char current_state = s[X][Y]; // it must be '.'

  for (int i = X - 1; i >= 0; --i){
    if(s[i][Y] == '.') ++count;
    else break;
  }
  
  for (int i = X + 1; i < H; ++i){
    if(s[i][Y] == '.') ++count;
    else break;
  }

  for (int i = Y - 1; i >= 0; --i){
    if(s[X][i] == '.') ++count;
    else break;
  }

  for (int i = Y + 1; i < W; ++i){
    if(s[X][i] == '.') ++count;
    else break;
  }
  cout << count << endl;
  return 0;
}
