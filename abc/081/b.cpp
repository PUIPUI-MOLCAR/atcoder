#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  
  int N;
  cin >> N;
  int A[N];
  for (int i = 0; i < N; ++i) cin >> A[i];

  int max = 0;
  int flag = true;
  while(flag){
    for (int i = 0; i < N; ++i){
      if(A[i] % 2 == 0) A[i] /= 2;
      else{
        flag = false;
        break;
      }
    }
    if(flag) ++max;
  }
  
  
  cout << max << endl;
  return 0;
}
