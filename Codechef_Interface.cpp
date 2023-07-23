#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
typedef pair<int, int> II;
typedef vector<II> VII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long LL;
#define PB push_back
#define F first
#define S second
#define ALL(a) a.begin(), a.end()
#define SET(a, b) memset(a, b, sizeof(a))
#define SZ(a) (int)(a.size())
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define deb(a) cerr << #a << " = " << (a) << endl;
#define deb1(a) cerr << #a << " = [ "; for (auto it = a.begin(); it != a.end(); it++)cerr << *it << " "; cerr << "] \n";
#define endl "\n"
const long long mod = 1e9 + 7;

int change_mod(int curr, int req) {
    int mmm1 = curr % 3;
    int m2 = req % 3;
    if (mmm1 == m2)
    return 0;
    if (mmm1 < m2)
    return m2 - mmm1;
    return m2 + (3 - mmm1);
}
int solver(vector<int> a) {
    int ans = 0;
    for (int i = 3; i < a.size(); i++) {
        ans += change_mod(a[i], a[i - 3]);
        a[i] = a[i - 3];
        
    }
    return ans;
}

void anmolsolve() {
    int n;
    cin >> n;
    vector<int> a(n);
    FOR(i, 0, n) {
        cin >> a.at(i);
        
    }
    VVI X;
    FOR(i, 0, 3) {
        FOR(j, 0, 3) {
            FOR(k, 0, 3) {
                if (((i + j + k) % 3) == 0)
                X.push_back({i, j, k});
                
            }
            
        }
        
    }
    int ansss = 1e9;
    for (auto vec : X) {
        VI temp = vec;
        for (auto x : a) temp.PB(x);
        ansss = min(ansss, solver(temp));
        
    }
    cout << ansss << endl;
}

signed main() {
    fast_io;
    int anmoltest = 1;
    cin >> anmoltest;
    for (int testNo = 1; testNo <= anmoltest; testNo++) {
        anmolsolve();
        
    }
    return 0;
}