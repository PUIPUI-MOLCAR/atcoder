#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
const long double PI = 4*atan(1);

int main(){
  int A, B, H, M;
  cin >> A >> B >> H >> M;
  long double x;
  x = sqrt(pow(A,2) + pow(B,2) - 2 * A * B * cos((5.5*M - 30*H)*PI/180));
  //cout << x << endl;
  printf("%.15Lf", x);
  return 0;
}
