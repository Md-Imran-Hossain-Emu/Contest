#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int testcase;
    cin >> testcase;
    for(int i=1;i<=testcase;i++){
        int n, m;
        cin >> n >> m;
        cout << "Case " << i << ": ";

        int root = (n*n + m*m);
        cout << root << endl;
    }
}

///Must see the constraints range
///Calculate the Time
