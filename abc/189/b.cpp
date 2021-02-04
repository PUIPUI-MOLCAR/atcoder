#include<iostream>
#include<string>
 
using namespace std;
 
const int maxN = 1010;
 
int main(){
  int N, X;
  cin >> N >> X;
  int V[maxN], P[maxN];
  for(int j=0; j < N; ++j) cin >> V[j] >> P[j];
  int alcohol = 0;
  int i;
  for(i = 0; i < N; ++i){
    alcohol += V[i] * P[i];
    if(alcohol - X * 100 > 0) break;
  }
  
  if(i == N){
    cout << -1 << endl;
  } else {
    cout << i + 1 << endl;
  }
  
  return 0;
}