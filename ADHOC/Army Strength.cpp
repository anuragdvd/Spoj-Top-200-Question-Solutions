// Army Strength  :: https://www.spoj.com/problems/ARMY/

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
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
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;

int main()
{
    si(t);
    int co=1;
    while(t--){
        si(n);
        si(m);
        ll a[n]; fr(i,0,n)  cin>>a[i];
        ll b[m]; fr(i,0,m)  cin>>b[i];
        
        sort(a,a+n);
        sort(b,b+m);
        
        int i=0,j=0;
    
        while(i<n and j<m){
            if(a[i]<b[j]){
                i++;
            }
            else if(a[i]>=b[j]){
                j++;
            }
        }
        
        
        
        if(i==n){
            cout<<"MechaGodzilla";
        }
        else{
            cout<<"Godzilla";
        }
        nl;
        
    }
        
}