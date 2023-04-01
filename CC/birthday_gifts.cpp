#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n,k;
        cin>>n>>k;
        priority_queue<int>pq;
        ll tk=2*k;
        ll in;

        for(int i=0;i<n;i++){
            cin>>in;
            pq.push(in);
        }
        ll cs=0,ts=0;
        while(k--){
            ll a=pq.top();
            pq.pop();
            cs+=a;
            ll b=pq.top();
            pq.pop();
            if(k==0){
                ts+=b;
                ts+=pq.top();
                break;
            }
            else{
                ts+=b;
            }
        }
        cout<<max(cs,ts)<<endl;

    }
    
}