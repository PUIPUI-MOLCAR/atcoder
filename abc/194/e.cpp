#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
using  myarr = array<ll,1500010>;

ll mex(myarr A, ll st, ll num){
    cout << "mex" << endl;
  ll ret = 0;
  myarr::iterator itr;
  myarr::iterator itr_st = A.begin() + st;
  myarr::iterator itr_end = A.begin() + st + num;
  const int MAX = 1500010;
  array<bool, MAX> flag;
  fill_n(flag, MAX, false);
  for(auto i = itr_st; i != itr_end; ++i){
    cout << *i << " ";
    flag[*i] = true;
  }
  for (int i = 0; i < MAX; ++i){
    if(!flag[i]) return i;
  }
  return 1500001;
  /*
  while (true)
  {
    itr = find(itr_st, itr_end, ret);
    if(itr == itr_end) break;
    else ++ret;
  }
  */
  //cout << endl;
  //cout << "ret " << ret << endl;

  return ret;
}

int main(){
  ll N,M;
  cin >> N >> M;
  myarr A;
  for (ll i = 0; i < N; ++i){
    ll x;
    //cin >> x;
    cin >> A[i];
    //A.push_back(x);
  }

  ll min = 100000000;
  for (ll i = 0; i <= N - M; ++i){
    cout << "ts" << endl;
    ll m = mex(A, i, M);
    if(min >= m) min = m;
  }

  cout << min << endl;

  return 0;
}
