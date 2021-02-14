#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

template<typename T> int sgn(T A){
  return (A > T(0)) - (A < T(0));
}

int main(){
  double X, Y, R;
  cin >> X >> Y >> R;

  double XmR, XpR, YmR, YpR;
  XmR = X - R;
  XpR = X + R;
  YmR = Y - R;
  YpR = Y + R;
  pair<int, int> leftbottom(X - R, Y - R);
  pair<int, int> righttop(X + R, Y + R);

  int count = 0;
  for (int x = leftbottom.first; x < righttop.first; ++x){
    double sq = sqrt(pow(R, 2) - pow(x - X, 2));
    int by = Y - sq;
    int ty = Y + sq;
    if(by == ty){
      ++count;
      continue;
    }
    count += ty - by + 1;
  }

  cout << count << endl;
  return 0;
}
