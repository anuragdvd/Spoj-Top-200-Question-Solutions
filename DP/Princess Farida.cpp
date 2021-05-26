// Princess Farida :: https://www.spoj.com/problems/FARIDA/

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
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
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;

int main()
{
    si(t);
    int co=1;
    while(t--){
    
        si(n);
        ll a[n+1];
        fr(i,1,n+1)   cin>>a[i];
        
        ll dp[n+1]={0};
        
        memset(dp,0,sizeof(dp));
        
        dp[1]=a[1];
        
        for(int i=2;i<=n;i++)
        {
            ll not_pick=0;
            ll pick=0;
            
            for(int j=i-1;j>=0;j--){
                not_pick=max(not_pick,dp[j]);
            }
            for(int j=i-2;j>=0;j--){
                pick=max(pick,dp[j]);
            }
            
            dp[i]=max(pick+a[i],not_pick);
        }
        cout<<"Case "<<co<<":"<<" ";
        cout<<dp[n];
        nl;
        co++;
    }
        
}