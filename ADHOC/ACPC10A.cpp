//https://www.spoj.com/problems/ACPC10A/

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
    int a,b,c;
    cin>>a>>b>>c;
    while(1)
    {  
        if(a==0&&b==0&&c==0)
            break;
        if((b-a)==(c-b))
        {
            cout<<"AP "<<c+(b-a);
        }
        else
        {
                cout<<"GP "<<c*(c/b);
        }
        cout<<endl;
        cin>>a>>b>>c;
    }
}
