// K-query :: https://www.spoj.com/problems/KQUERY/

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 100001
#define M 1000000007
#define pb push_back
#define INF 1000000001

typedef long long int ll;

using namespace std;

ll a[30000+1];
vector<ll> segtree[320000+1];


void build(ll si, ll ss, ll se)
{
    if(ss==se)
    {    segtree[si].pb(a[ss]); return; }
    int mid=(ss+se)/2;
    build(2*si,ss,mid);
    build(2*si+1,mid+1,se);
    
    ll i=0,j=0;
    
    while(i<segtree[2*si].size()&&j<segtree[2*si+1].size())
    {
        if(segtree[2*si][i]<=segtree[2*si+1][j])
        {
            segtree[si].pb(segtree[2*si][i]); i++;
        }
        else
        {
            segtree[si].pb(segtree[2*si+1][j]); j++;
        }
    }
    
    while(i<segtree[2*si].size())
    {
        segtree[si].pb(segtree[2*si][i]); i++;
    }
    
    while(j<segtree[2*si+1].size())
    {
        segtree[si].pb(segtree[2*si+1][j]); j++;
    }    
    
}

ll query(ll si,ll ss,ll se,ll qs,ll qe,ll k)
{
    if(qs>se||qe<ss)    return 0; //outside
    if(ss>=qs&&se<=qe)
    {
        ll res=segtree[si].end()-upper_bound(segtree[si].begin(),segtree[si].end(),k);
        return res;
    }
    
    ll mid=(ss+se)/2;
    ll l=query(2*si,ss,mid,qs,qe,k);
    ll r=query(2*si+1,mid+1,se,qs,qe,k);
    return l+r;
}



int main()
{
    si(n);
    fr(i,1,n+1)   cin>>a[i];
    build(1,1,n);
    sll(q);
    while(q--)
    {
        sll(l); sll(r); sll(k);
        cout<<query(1,1,n,l,r,k)<<endl;
    }
}
