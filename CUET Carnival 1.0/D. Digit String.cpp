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
void solvetoo();
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
    for(int ttt=1;ttt<=testcase;ttt++){
        cout << "Case " << ttt << ": ";
        solvetoo();
    }
}

void solvetoo()
{
    int n;
    cin >> n;
    while(n--)
        cout << '0';
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
