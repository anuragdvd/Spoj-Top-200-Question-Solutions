// Philosophers Stone :: https://www.spoj.com/problems/BYTESM2/


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
#define INF 10000001

typedef long long int ll;

using namespace std;

int main()
{
   si(t);
   while(t--)
   {
       si(w); si(h);
       ll a[w][h]; fr(i,0,w) { fr(j,0,h) cin>>a[i][j]; }
       ll dp[w][h+2];
       memset(dp,-1,sizeof(dp));
       
       fr(i,1,h+1)
          dp[0][i]=a[0][i-1];
          
        fr(i,1,w)
        {
            fr(j,1,h+1)
            {
                ll mx=max(dp[i-1][j],dp[i-1][j-1]);
                mx=max(mx,dp[i-1][j+1]);
                dp[i][j]=mx+a[i][j-1];
            }
        }
        
        ll ans=INT_MIN;
        
        fr(i,0,h+1)
            ans=max(ans,dp[w-1][i]);
        
        /*fr(i,0,w)
        {
            fr(j,0,h+1)
                cout<<dp[i][j]<<" ";
            nl;
        }*/
        cout<<ans;
        nl;
   }
}