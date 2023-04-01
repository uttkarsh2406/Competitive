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
        ll n;
        cin>>n;
        set<string>s;
        for(int i=0;i<n;i++){
            string temp;
            cin>>temp;
            s.insert(temp);
        }

        for(int i=0;i<=n;i++){
            int f=i;
            string res="";
            while(f){
                res+=to_string(f%2);
                f/=2;
            }
            reverse(res.begin(),res.end());

            int c=res.size();
            string temp=string(n-c,'0');
            res=temp+res;
            if(s.count(res)){
                continue;
            }
            cout<<res<<endl;
            break;
        }

    }
    
}