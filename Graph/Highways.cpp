// Highways :: https://www.spoj.com/problems/HIGHWAYS/

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
    while(t--){
        si(n); si(m); si(start); si(end);
        --start; --end;
        
        vector<pair<int,int>> v[n];
        
        fr(i,0,m){
            si(x); si(y); si(w); x--; y--;
            v[x].pb({y,w});
            v[y].pb({x,w});
        }
        
        bool visited[n]; 
        
        memset(visited,false,sizeof visited);
        
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
        
        pq.push({0,start});
        
        ll dist[n+1];
        
        fr(i,0,n+1)   dist[i]=INT_MAX;
        
        dist[start]=0;
        
        while(!pq.empty()){
            int node=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            visited[node]=true;
            for(auto j:v[node]){
                
               
                
                if(d+j.second<dist[j.first] and !visited[j.first]){
                 
                    dist[j.first]=d+j.second;
                    pq.push({dist[j.first],j.first});
                }
            }
        }
        
        if(dist[end]==INT_MAX){
            cout<<"NONE";
        }
        else{
            cout<<dist[end];
        }
        nl;
        
    }
        
}