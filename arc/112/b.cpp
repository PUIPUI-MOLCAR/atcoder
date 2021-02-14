#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

ll getMyAns(ll B, ll C){

  if(B == 0){
    ll CisOdd = C % 2;
    ll Cper2 = C / 2;
    if(C == 1) return 1;
    else return 2 * Cper2 + CisOdd;
  }

  int flag_minus = 0;
  if(B < 0){
    B = -B;
    --C;
    flag_minus = 1;
  }

  ll CisOdd = C % 2;
  ll Cper2 = C / 2;
  ll count = 0;
  ll l = B - Cper2;
  // 内周（動かない場合を含む）
  if(C != 0){
    if(l > 0){
      count += 2 * Cper2 + CisOdd;
    } else if(l == 0) {
      count += 2 * Cper2;
    } else {
      count += 2 * B;
    }
  } else if(C == 0 && flag_minus == 1){
    count += 1;
  }
  
  // 外周
  if(flag_minus == 1) C += 2;
  ll Cm1 = C - 1;
  ll Cm1per2 = Cm1 / 2;
  if(Cm1 <= 1){
    count += 1;
  } else {
    count += 2 * Cm1per2 + Cm1 % 2;
  }
  return count;
}

int main(){
  ll B,C;
  cin >> B >> C;
  cout << getMyAns(B, C) << endl;
}