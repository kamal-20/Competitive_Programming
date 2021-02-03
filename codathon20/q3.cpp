#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define pb push_back
#define rsz resize
#define endl '\n'
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
#define pi  pair<int,int>
#define f first
#define s second
#define pll pair<ll, ll>
#define vpl vector<pll>
#define vl vector<ll>
#define vll vector<ll, ll>
#define mp make_pair
const ll mxN = 2e5;
const ll mod = 1e9 + 7;
const ll N = 1005;
char grid[N][N];
ll dp[N][N];

bool pairs(vl a, ll n, ll k)
{
    if (n & 1)
        return false;

    unordered_map<ll, ll> f;
 
    for (ll i = 0; i < n; i++)
        f[((a[i] % k) + k) % k]++;

    for (ll i = 0; i < n; i++) 
    {
        ll rem = ((a[i] % k) + k) % k;

        if (2 * rem == k)
        {

            if (f[rem] % 2 != 0)
                return false;
        }

        else if (rem == 0) 
        {
            if (f[rem] & 1)
                return false;
        }

        else if (f[rem] != f[k - rem])
            return false;
    }
    return true;
}
 
int main(){
 

        ll n;
        cin  >> n;
        vl a(n);
        unsigned ll sum=0;
        for(int i=0;i<n;i++){ 
            cin >> a[i];
            sum += a[i];
        }

        sort(all(a));
        vector<ll> d;

        for (ll i=1; i<=sqrt(sum); i++) 
        {
            if (sum%i == 0) 
            {
                if (sum/i == i) 
                    d.push_back(i);
                else 
                {
                    d.push_back(sum/i);
                    d.push_back(i);
                }
            } 
        } 

        sort(d.rbegin(), d.rend());

        for(ll x=0;x<d.size();x++)
            if(pairs(a,n,d[x])) {
                cout << d[x] <<" ";
                break;
            }
        

}