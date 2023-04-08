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
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin>>n;
        unordered_map<char,int>mp;
        string s;
        cin>>s;
        ll oc=0,zc=0;
        string res="YES";
        for(auto i:s){
            if(s[i]=='1'){
                oc++;
            }
            else{
                if(oc%2==1){
                    cout<<1<<endl;
                    res="NO";
                }
                oc=0;
            }
        }
        if(oc%2==1 && n>1){
            res="NO";
        }
        cout<<res<<endl;

    }
    
}