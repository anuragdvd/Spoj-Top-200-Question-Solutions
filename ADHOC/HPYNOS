// https://www.spoj.com/problems/HPYNOS/

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

ll summ(ll n)
{
    ll sum=0;
    while(n!=0)
    {
        sum=sum+((n%10)*(n%10));
        n/=10;
    }
    return sum;
}

int main()
{
    sll(n);
    map<ll,ll> mp;
    mp[n]++;
    ll flag=0; 
    int i=0;
    while(flag!=1&&flag!=-1)
    {
        i++;
        n=summ(n);
        if(n==1)
            flag=-1;
        else
        {
            mp[n]++;
            if(mp[n]==2)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"-1";
    }
    else
    {
        cout<<i;
    }
}
