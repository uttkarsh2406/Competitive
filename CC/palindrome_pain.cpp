#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */

        ll a, b;
        cin >> a >> b;
        int n=a+b;
        vector<char>q(n),w(n);
        if(a==1 || b==1 ||(a&1 && b&1)){
            cout<<-1<<endl;
        }
        else{
            int a1=a,a2=a;
            int b1=b,b2=b;
            for(int i=0;i<n;i++){
                if(a1>2){
                    a1-=2;
                    q[i]='a';
                    q[n-i-1]='a';
                }
                else{
                    b1-=2;
                    q[i]='b';
                    q[n-i-1]='b';
                }
                if(b2>2){
                    b2-=2;
                    w[i]='b';
                    w[n-i-1]='b';
                }
                else{
                    a2-=2;
                    w[i]='a';
                    w[n-i-1]='a';
                }
            }
            if(a1>0){
                q[n/2]='a';
            }
            if(b1>0){
                q[n/2]='b';
            }
            if(a2>0){
                w[n/2]='a';
            }
            if(b2>0){
                w[n/2]='b';
            }
            for(auto i:q){
                cout<<i;
            }
            cout<<endl;
            for(auto i:w){
                cout<<i;
            }
            cout<<endl;
        }
    }
}
