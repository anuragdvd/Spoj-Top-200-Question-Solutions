// Main 72 - Subset Sum :: https://www.spoj.com/problems/MAIN72/

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

typedef long long int ll;

using namespace std;

int main()
{
    si(t);
    while(t--)
    {
        si(n);
        ll sum=0;
        ll a[n]; fr(i,0,n)  cin>>a[i];
        fr(i,0,n)   sum+=a[i];
        ll dp[sum+1];
        dp[0]=1;
        fr(i,1,sum+1)	dp[i]=0;
        fr(i,0,n)
        {
            int curr=a[i];
            for(int j=sum;j>=curr;j--)
            {
                dp[j]=max(dp[j],dp[j-curr]);
            }
        }
        ll ans=0;
        fr(i,0,sum+1)
            if(dp[i]==1)    ans+=i;
        cout<<ans<<endl;
        
        
    }
}