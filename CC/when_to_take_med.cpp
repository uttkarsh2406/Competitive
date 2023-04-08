#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

bool leap_checker(ll year){
    if(year%400==0){
        return true;
    }
    else if(year%100==0){
        return false;
    }
    else if(year%4==0){
        return true;
    }
    else{
        return false;
    }
}

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
        ll year=stoi(s.substr(0,4));
        ll month=stoi(s.substr(5,2));
        ll date=stoi(s.substr(8,2));
        ll leap=leap_checker(year);
        ll days=0;
        if(month==8 || month&1){
            if(date&1){
                days+=((31-date)/2)+1;
            }
            else{
                days+=((31-date)/2)+1;
            }
            cout<<days<<endl;
            continue;
        }
        else if(month!=2 && !(month&1)){
            if(date&1){
                days+=((29-date)/2)+1;
            }
            else{
                days+=((29-date)/2)+1;
            }
            cout<<days+15<<endl;
            continue;
        }
        else if(month==2 && leap){
            days+=((29-date)/2)+1;
            cout<<days<<endl;
            continue;
        }
        else{
            days+=((27-date)/2)+1;
            cout<<days+15<<endl;
            continue;
        }

    }
    
}