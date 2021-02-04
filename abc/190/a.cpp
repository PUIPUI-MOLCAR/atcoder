#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  bool flag = false;
  if(C == 0){
    while( true){
      if(A > 0){
        --A;
      } else {
        cout << "Aoki" << endl;
        flag = true;
      }
      if(flag) break;
      if(B > 0){
        --B;
      } else {
        cout << "Takahashi" << endl;
        flag = true;
      }
      if(flag) break;
    }
  } else if(C == 1){
    while( true ){
      if(B > 0){
        --B;
      } else {
        cout << "Takahashi" << endl;
        flag = true;
      }
      if(flag) break;
      if(A > 0){
        --A;
      } else {
        cout << "Aoki" << endl;
        flag = true;
      }
      if(flag) break;
    }

  }
  return 0;
}
