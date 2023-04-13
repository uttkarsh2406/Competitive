#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

bool help(string a, string b){
    a.pop_back();
    b.pop_back();

    if(a.back()!=b.back()){
        return a.back()<b.back();
    }
    if(a[0]=='1' && a[1]=='2'){
        a[0]=a[1]='0';
    }
    if(b[0]=='1' && b[1]=='2'){
        b[0]=b[1]='0';
    }
    return a<=b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll mul=12*60;
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        string p;
        cin>>p;
        string tp;
        cin>>tp;
        p+=tp;
        ll n;
        cin>>n;
        for(int i=0;i<n;i++){
            string s1,s2,s3,s4;
            cin>>s1>>s2>>s3>>s4;
            s1+=s2;
            s3+=s4;

            if(help(s1,p) && help(p,s3)){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;

    }
    
}