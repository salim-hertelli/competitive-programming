#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef double db;

#define vi vector<int>
#define vii vector<pair<int, int>>
#define vl vector<long long>
#define vll vector<pair<long long, long long>>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define pb push_back
#define popb pop_back
#define mp make_pair
#define PI 3.14159265
const long long INF = 1e9 + 7LL;

ll gcd(ll a, ll b);

ll pwr(ll x, ll n);

// ii mvt[4]={{1,0},{0,1},{0,-1},{-1,0}};

void solve()
{
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif*/

    int tests = 1;
    cin >> tests;
    while (tests--)
    {
        solve();
    }

    /*cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs"
         << endl;*/

    return 0;
}

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll pwr(ll x, ll n)
{
    ll ans = 1;
    while (n)
    {
        ans *= x;
        n--;
    }
    return ans;
}
