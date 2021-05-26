// https://www.spoj.com/problems/CANDY/

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
    int t; cin>>t;
    while(1)
    {
        if(t==-1)
            break;
        int a[t]; 
        int sum=0; 
        fr(i,0,t)
        { si(temp); a[i]=temp; sum+=a[i]; }
        if(sum%t!=0)
            cout<<-1<<endl;
        else
        {
            int avg=sum/t;
            int ans=0;
            fr(i,0,t)
                if(avg>a[i])
                    ans+=avg-a[i];
            cout<<ans<<endl;
        }
        cin>>t;
    }
}
