// https://www.spoj.com/problems/NGM/s

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
    sll(n);
    if(n%10==0)
        cout<<"2";
    else
    {
        cout<<"1";
        cout<<endl;
        cout<<n%10;
    }
}
