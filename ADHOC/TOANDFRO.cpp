//https://www.spoj.com/problems/TOANDFRO/

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
    si(m);
    while(1)
    {
        if(m==0)
            break;
        string s; cin>>s; int len=s.length();
        int n=len/m; int flag=0; char a[n][m]; int k=0;
      //  watch(n); 
        fr(i,0,n)
        {
            if(flag==1)
                k=k+m-1;
          
            fr(j,0,m)
            {
                if(flag==0)
                    a[i][j]=s[k++];
                else
                {
                    a[i][j]=s[k--];
                }
            }
         
            if(flag==0) flag=1;
            else flag=0, k=k+m+1;
        }
        fr(i,0,m)
        {
            fr(j,0,n)
            {
                cout<<a[j][i];
            }
        }
        cout<<endl; cin>>m;
    }
    
}
