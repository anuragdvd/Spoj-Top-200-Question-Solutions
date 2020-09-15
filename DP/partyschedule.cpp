// Party Schedule :: https://www.spoj.com/problems/PARTY/

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
    while(1)
    {
        sll(value); sll(n);
        if(value==0&&n==0)
            break;
        ll price[n], val[n];
        fr(i,0,n)
            cin>>price[i]>>val[i];
        ll dp[n+1][value+1];
        
        memset(dp,0,sizeof(dp));
        
        fr(i,1,n+1)
        {
            fr(j,1,value+1)
            {
                
                if(price[i-1]<=j)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-price[i-1]]+val[i-1]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
    
        ll ans=dp[n][value];
        ll flag=false;
        fr(i,0,value+1)
        {
            if(dp[n][i]==ans)
            {
                cout<<i<<" ";
                break;
            }
        }
        cout<<ans;
        nl;
        
    }
}