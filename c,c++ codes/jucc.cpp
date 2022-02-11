#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
bool cmp(pair<ll,ll>p1,pair<ll,ll>p2)
{
    if(p1.first==p2.first)
    {
        if(p1.second>=p2.second)
            return true;
    }
    else if(p1.first<p2.first)
        return true;
 
    return false;
}
 
void solve(vector<ll>&u,vector<ll>&s,ll n)
{
    vector<pair<ll,ll> >p;
    for(int i=0;i<n;i++)
    {
        p.push_back({u[i],s[i]});
    }
    sort(p.begin(),p.end(),cmp);
 
    vector<ll>res(n+1,0);
 
    for(int i=0;i<n;i++)
    {
        vector<ll>a;
        a.push_back(p[i].second);
        int j;
        for(j=i+1;j<n;j++)
        {
            if(p[j].first==p[j-1].first)
            {
                a.push_back(a[a.size()-1]+p[j].second);
            }
            else
            {
                i=j-1;
                break;
            }
        }
        ll x=(long long)a.size();
        for(int k=1;k<=x;k++)
        {
            ll m=x%k;
            res[k]+=a[x-1-m];
        }
        a.clear();
        if(j==n)
            break;
    }
 
 
    for(int i=1;i<=n;i++)
        cout<<res[i]<<' ';
    cout<<'\n';
}
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>u(n),s(n);
        for(int i=0;i<n;i++)
            cin>>u[i];
        for(int i=0;i<n;i++)
            cin>>s[i];
        solve(u,s,n);
    }
    return 0;
}