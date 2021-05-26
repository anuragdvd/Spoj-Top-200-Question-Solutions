// Advanced Fruits :: https://www.spoj.com/problems/ADFRUITS/

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

ll dp[102][102];

int lcs(string s, string t, int i, int j){
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    else{
        if(s[i-1]==t[j-1]){
            return dp[i][j]=1+lcs(s,t,i-1,j-1);
        }
        else{
            return dp[i][j]=max(lcs(s,t,i-1,j),lcs(s,t,i,j-1));
        }
    }
}


int main()
{
    string s; 
    while(cin>>s){
        string t; 
        cin>>t;
        
        if(t.length()>s.length()){
            swap(s,t);
        }
        
        memset(dp,-1,sizeof(dp));
        
        int n=s.length();
        int m=t.length();
        
        fr(i,0,101){
            fr(j,0,101){
                if(i==0 or j==0)    dp[i][j]=0;
            }    
        }
        
        lcs(s,t,n,m);
        
        
        
        string ans="";
        
        int i=n,j=m;
        
        while(i>0 and j>0){
          //  cout<<ans<<endl;
            if(s[i-1]==t[j-1]){
                ans+=s[i-1]; 
                i--; j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    ans+=s[i-1];
                    i--;
                }
                else{
                    ans+=t[j-1];
                    j--;
                }
            }
        }
        
        
        while(i>0){
            ans+=s[i-1];
            --i;
        }
        while(j>0){
            ans+=t[j-1];
            --j;
        }
        
        reverse(ans.begin(),ans.end());

        
        cout<<ans<<endl;
        
       
        
        
        
    }
        
}