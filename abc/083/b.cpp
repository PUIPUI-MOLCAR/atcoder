#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int findSumOfDigits(int n){
  int sum = 0;
  while (n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(){
  int N,A,B;
  cin >> N >> A >> B;
  
  int total = 0;
  for (int i = 1; i <= N; ++i) {
    int sumOfDigits = findSumOfDigits(i);
    if(A <= sumOfDigits && sumOfDigits <= B) total += i;
  }
  cout << total << endl;
  return 0;
}
