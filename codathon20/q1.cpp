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

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	T{
        ll n;
        cin>>n;
        char side ;
        long long val;
        ll left=LLONG_MIN,right=LLONG_MAX;
        rep(i,n){
            cin>>side>>val;
            if(side=='R')
                left= max(left,val+1);
            else right= min(right,val-1);
        }
        ll ans = right-left+1;
        if(left>right)
            cout<<-1<<"\n";
        else cout<<ans<<"\n";

    }
        
    }
