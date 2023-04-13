#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    unordered_map<string,int>mp;
    mp["monday"]=3;
    mp["tuesday"]=4;
    mp["wednesday"]=5;
    mp["thursday"]=6;
    mp["friday"]=7;
    mp["saturday"]=1;
    mp["sunday"]=2;
    ll tt;
    cin>>tt;

    while (tt--)
    {
        /* code */
        string a,b;
        ll c,d;
        cin>>a>>b>>c>>d;
        ll e=mp[a],f=mp[b];
        ll g=0;
        if(f>=e){
            g=f-e+1;
        }
        else{
            g=7-e+1+f;
        }
        int i;
        for(i=c;i<=d;i++){
            if(i%7==g){
                break;
            }
        }
        if(i>d){
            cout<<"impossible"<<endl;
        }
        else if(i+7<=d){
            cout<<"many"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    
}