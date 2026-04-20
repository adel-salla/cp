#include <bits/stdc++.h>
using namespace std;

// Shorthands
#define str string
#define ll long long
#define ld long double
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define INF 1e18

/*----------- STLs -----------*/
// vector
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
// map
#define mpii map<int, int>
#define mpli map<ll, int>
#define mpll map<ll, ll>
#define mpsi map<str, int>
#define mpsll map<str, ll>
#define mpss map<str, str>
// unordered_map
#define umpii unordered_map<int, int>
#define umpli unordered_map<ll, int>
#define umpll unordered_map<ll, ll>
#define umpsi unordered_map<str, int>
#define umpsll unordered_map<str, ll>
#define umpss unordered_map<str, str>

// Loops
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

// Input
#define vin(v) \
  for (auto &x : v) cin >> x
#define arrin(a, n) rep(i, 0, n) cin >> a[i]

// Output
#define vout(v)                      \
  for (auto x : v) cout << x << ' '; \
  cout << '\n'
#define voutn(v) \
  for (auto x : v) cout << x << '\n'

void fastIO() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

void solve();

int main() {
  fastIO();

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}

void solve() {}
