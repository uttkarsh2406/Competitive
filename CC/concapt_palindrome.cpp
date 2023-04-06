#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
        ll n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        if(n>m){
            swap(a,b);
            swap(n,m);
        }
        vector<int>freq1(26),freq2(26);
        for(int i=0;i<n;i++){
            freq1[a[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            freq2[b[i]-'a']++;
        }
        ll oc=0;
        bool flag=false;
        for(int i=0;i<26;i++){
            if(freq2[i]<freq1[i]){
                flag=true;
                break;
            }
            oc+=(freq2[i]-freq1[i])%2;
        }
        if(oc<=1 && !flag){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        continue;

    }
    
}