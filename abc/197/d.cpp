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
  double x0,y0, xn2, yn2;
  cin >> N;
  cin >> x0 >> y0 >> xn2 >> yn2;

  double xm, ym;
  xm = (x0 + xn2) / 2;
  ym = (y0 + yn2) / 2;

  x0 -= xm;
  y0 -= ym;

  double theta = 2 * M_PI / N;

  double x1, y1;
  x1 = x0 * cos(theta) - y0 * sin(theta);
  y1 = x0 * sin(theta) + y0 * cos(theta);

  x1 += xm;
  y1 += ym;
  
  //cout << x1 << " " << y1 << endl;
  printf("%13.11lf %13.11lf\n", x1, y1);
  return 0;
}
