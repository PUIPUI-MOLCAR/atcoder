#include<iostream>
#include<string>
 
using namespace std;
 
const int maxN = 10010;
const int maxA = 100000;
 
int main(){
  int N;
  cin >> N;
  int A[maxN];
  for (int i = 0; i < N; ++i) cin >> A[i];

  int x;
  int maxS = 0;
  int s = 0;
  for (int i = 0; i < N; i++) {
    x = A[i];
    for (int j = i; j < N; j++) {
      if(A[j] < x) x = A[j];
      s = (j - i + 1) * x;
      if(s > maxS) maxS = s;
    }
  }
  cout << maxS << endl;
  return 0;
}