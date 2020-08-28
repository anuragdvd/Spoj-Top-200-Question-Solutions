// BEHAPPY  :: https://www.spoj.com/problems/BEHAPPY/


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
   while(1)
   {
       si(m); si(n);
       if(m==0&&n==0)   break;
       ll a[m]; ll b[m]; fr(i,0,m) cin>>a[i]>>b[i];

       ll dp[m][n+1];
       memset(dp,0,sizeof(dp));       
       fr(i,a[0],b[0]+1)
       {
           dp[0][i]=1;
       }

       
       fr(i,1,m)
       {
           fr(j,0,n+1)
           {
               fr(k,a[i],b[i]+1)
               {
                   if(j-k>=0)
                       dp[i][j]+=dp[i-1][j-k];
               }
           }
       }
       
     /*  fr(i,0,m)
       {
           fr(j,0,n+1)  cout<<dp[i][j]<<" ";
           nl;
       } */ 
       cout<<dp[m-1][n]<<endl;
       
       
   }
}