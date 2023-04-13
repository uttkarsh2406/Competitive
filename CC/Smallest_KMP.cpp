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
        string a,b;
        cin>>a>>b;
        vector<int>q(26),w(26);
        for(int i=0;i<a.size();i++){
            q[a[i]-'a']++;
        }
        for(int i=0;i<b.size();i++){
            w[b[i]-'a']++;
        }
        vector<int>diff;
        for(int i=0;i<26;i++){
            diff.push_back(q[i]-w[i]);
        }
        // cout<<diff.size()<<endl;;
        string res;
        for(int i=0;i<26;i++){
            for(int j=0;j<diff[i];j++){
                res.push_back(char('a'+i));
            }
        }
        int lb=lower_bound(begin(res),end(res),b[0])-begin(res);
        int ub=upper_bound(begin(res),end(res),b[0])-begin(res);
        // cout<<lb<<" "<<ub<<endl;
        string a1=res.substr(0,ub);
        a1+=b;
        a1+=res.substr(ub);
        string a2=res.substr(0,lb);
        a2+=b;
        a2+=res.substr(lb);
        if(a1<a2){
            cout<<a1<<endl;
        }
        else{
            cout<<a2<<endl;
        }

    }
    
}


// aabc
// aabcbzc
// aabccbz