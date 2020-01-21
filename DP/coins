/* https://www.spoj.com/problems/COINS/
n - > n/2,n/3,n/4
n==1 1
n==2 max(2,1+0+0) = max(ans(1)+0+0,1+0+0) = 2
n==3 max(3,ans(2)+ans(1)+ans(0)) max(3,2+1+0) = 3 
n==4 max(4,ans(2)+ans(1)+ans(1)= 4
n==12 max(12,ans(6)+ans(4)+ans(3)) = max(12,4+3+6)= 13
n==6 max(6,ans(3)+ans(2)+ans(1)) = max(6,3+2+1) = 6
*/ 


#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 1000001

typedef long long int ll;

using namespace std;

map<int,ll> a;

ll ans(ll n)
{
    if(n==0) return 0; 
    else if(a[n]!=0) return a[n];
    ll x=ans(n/2)+ans(n/3)+ans(n/4);
    a[n]=max(n,x);
    return a[n];
}

int main()
{
    a[0]=0; a[1]=1; a[2]=2; a[3]=3; a[4]=4;
    ll n;
    while(cin>>n)
    {
        pll(ans(n)); nl;
    }
}
