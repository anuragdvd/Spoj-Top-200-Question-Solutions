/* Question Link : https://www.spoj.com/problems/PPATH/
Algorithm Used : SSSP using BFS */


#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; cin>>x;
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 1000001
  
typedef long long int ll;
 
using namespace std;

vector<vector<ll>> graph;
vector<bool> visited(100001);
ll dist[100001];
vector<ll> primes;

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)  return false;
    }
    return true;
}

bool isvalid(int a,int b)
{
    int c=0;
    while(a>0)
    {
        if(a%10!=b%10)
        {
            c++;
        }
        a/=10,b/=10;
    }
    if(c==1) return true;
    else return false;
}

void buildgraph()
{
    fr(i,1000,10000)
    {
        if(isPrime(i)) 
        {
            primes.push_back(i);
        }
    }
    
    for(int i=0;i<primes.size();i++)
    {
        for(int j=i+1;j<primes.size();j++)
        {
            if(isvalid(primes[i],primes[j]))
            {
                graph[primes[i]].push_back(primes[j]);
                graph[primes[j]].push_back(primes[i]);
            }
        }
    }
}

void bfs(int node)
{
	queue<int> q;
	visited[node]=true;
	dist[node]=0;
	q.push(node);
	while(!q.empty())
	{
		node=q.front();
		q.pop();
		for(auto i:graph[node])
		{
			if(!visited[i])
			{
				visited[i]=true;
				dist[i]=dist[node]+1;
				q.push(i);
			}
		}
	}	
}

int main()
{
	si(t);
	graph.assign(100001,vector<ll>());
	buildgraph();
	while(t--)
	{
		si(a); si(b);
		fr(i,1000,10000)    dist[i]=-1, visited[i]=false;
        bfs(a);
        if(dist[b]==-1)
        {
            cout<<"Impossible"<<endl;
        }
        else
            cout<<dist[b]<<endl;
	}

}
