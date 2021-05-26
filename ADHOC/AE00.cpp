// https://www.spoj.com/problems/AE00/

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
    si(n); 
    int ans=n;
    fr(i,1,n+1)
    {
        int lim=sqrt(i);
        fr(j,2,lim+1)
        { 
            if(i%j==0)
                ans++;
        }
    }
    if(n==1)
        cout<<1;
    else
    cout<<ans;
    
}
