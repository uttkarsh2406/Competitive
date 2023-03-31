#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}

int main(){
  int T, N;
  ll n1, n2, res;

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin>>T;
  while(T--){
    cin>>N;
    N++;
    ll a=N/2,b=N-a;
    ll res= pw(2,a)+pw(2,b)-2;
    cout<<res<<endl;

  }

  return 0;
}