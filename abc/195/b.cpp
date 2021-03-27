#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>; template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int A, B, W;
  cin >> A >> B >> W;
  W *= 1000;

  bool flag = true;
  int min, max, amari;
  double av;
  
  min = W / B;
  if(W % B != 0){
    amari = B - (W - min * B);
    for (int i = min; i < min; ++i){

    }
  }

  max = W / A; 
  if(W % A != 0){ 
    max = W / A - 1;
    amari = W - A * max;
    if(A <= amari && amari <= B) max = max + 1; 
    else flag = false;
  } 

  if(!flag) cout << "UNSATISFIABLE";
  else cout << min << " " << max;

  cout << endl;
  
  return 0;
}
