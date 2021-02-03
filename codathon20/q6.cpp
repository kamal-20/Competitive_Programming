#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,vector<int>> mii;
typedef map<int,vector<int>> mivi;
typedef map<int,string> mis;
typedef map<string,string> mss;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define mod 1000000007
#define rep(i, n) for(ll i = 0;i<n;++i)
#define repf(i,k,n) for (ll i = k; i <= n; ++i) 
#define repr(i,k,n) for (ll i = k; i >= n; --i) 
#define T ll cases; cin>>cases; while(cases--)

ll n,m,k;

pair<ll,ll> minimumCostSimplePath(ll u, ll destination,
                    vector<bool> &visited, vector<vector<ll>> graph)
{
 
    if (u == destination)
        return make_pair(0,0);
 
    visited[u] = true;
 
    ll ans = LLONG_MAX;
    ll maxnode= LLONG_MIN;
 
        for (int i = 0; i < graph[u].size(); i++) {
        if (graph[u][i] != LLONG_MAX && !visited[i]) {
 
            pair<ll,ll> curr = minimumCostSimplePath(i,
                        destination, visited, graph);
 
            if (curr.first < LLONG_MAX) {
                if(ans>graph[u][i] + curr.first){
                    maxnode=max(maxnode,graph[u][i]);
                    maxnode=max(maxnode,curr.second);
                }
                ans = min(ans, graph[u][i] + curr.first);
                
            }
        }
    }
    visited[u] = 0;

    return make_pair(ans,maxnode);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin >> n >> m >> k;
    vector<vector<ll>> graph(n, vector<ll>(n, LLONG_MAX));;
    vector<bool> visited(n,false);	
	rep(i,m){
		ll u, v,time;
		cin >>u >> v>> time;
		graph[u-1][v-1]=time;
	}
    pair<ll,ll> final = minimumCostSimplePath(0,n-1,visited,graph);
	cout<<final.F - final.S +final.S/k <<"\n";
	
        
}
