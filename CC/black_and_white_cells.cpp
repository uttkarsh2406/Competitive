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
        string s;
        cin>>s;
        vector<int>v;
        ll n=s.size();
        if(n&1 && s[n/2]=='W'){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Aleksa"<<endl;
        }
    }
    
}