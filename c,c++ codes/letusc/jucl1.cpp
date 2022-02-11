#include <bits/stdc++.h>
typedef  long long int ll;
using namespace std;



int main() {
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){

        ll cj,jc;
        cin>>cj>>jc;
        string s;
        cin>>s;

        string ns="";

        for(ll j=0;j<s.length();j++){
            if(s[j]!='?') ns+=s[j];
        }

        ll cost=0;
        ll h= ns.length();
        for(ll k=0;k<h-1;k++){
            if(ns[k]=='C'&&ns[k+1]=='J'){
                cost+=cj;
            }
            else if(ns[k]=='J'&&ns[k+1]=='C'){
                cost+=jc;
            }
        }
        cout<<"Case #"<<i<<": "<<cost<<endl;
    }
}
