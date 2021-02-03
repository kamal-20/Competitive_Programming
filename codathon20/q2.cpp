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

ll count(ll arr[], ll n) 
{ 

    ll even[2] = {1, 0}; 
  

    ll ans = 0, sum = 0; 

    for (ll i=0; i<=n-1; i++) 
    { 
        sum = (sum + arr[i]) % 2;

        even[sum]++; 
    } 

ans =  (even[0]*(even[0]-1)/2) + (even[1]*(even[1]-1)/2);   
    return ans; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	T{
        ll n;
        cin>>n;
        ll a[n],sum[n];
        ll odd=0,even=0;
        rep(i,n){
            cin>>a[i];
            a[i]%=2;
        }

        ll ans = count(a,n);

        cout << ans << endl;


        
    }
        
    }
