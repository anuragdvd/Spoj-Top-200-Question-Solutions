//https://www.spoj.com/problems/FASHION/

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 1000001

typedef long long int ll;

using namespace std;

int main()
{
    si(t);
    while(t--)
    {
        si(n); ll a[n]; ll b[n]; fr(i,0,n) cin>>a[i]; fr(i,0,n) cin>>b[i]; sort(a,a+n); sort(b,b+n); ll ans=0;
        fr(i,0,n)  ans+=a[i]*b[i];
        cout<<ans<<endl;
    }
}
