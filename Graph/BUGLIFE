// https://www.spoj.com/problems/BUGLIFE/

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

vector<vector<ll> > g; 


bool bfs(int n, int src,ll color[])
{
    
    color[src]=1;
    std::queue<ll> q;
    q.push(src);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto i:g[u])
        {
            if((color[i]==color[u]))
                return false;
            else if(color[i]==-1)
                color[i]=1-color[u],  q.push(i);
        }
    }
    return true;
}

bool util(int n)
{
    ll color[n+1]; fr(i,1,n+1) color[i]=-1;
    fr(i,1,n+1)
    {
        if(color[i]==-1)
        {
            if(bfs(n,i,color)==false)
                return false;
        }
    }
    return true;
}

int main()
{
    si(t);
    int i=0;
    while(t--)
    {
        i++;
        si(n);
        si(m);
    g.assign(n+1, vector<ll>()); 
        fr(i,0,m)
        {
            si(x); si(y); g[x].push_back(y); g[y].push_back(x); 
        }
        bool flag=util(n);
        if(flag==false)
            cout<<"Scenario #"<<i<<": "<<endl<<"Suspicious bugs found!"<<endl;
        else
            cout<<"Scenario #"<<i<<":"<<endl<<"No suspicious bugs found!"<<endl;
    }
}
