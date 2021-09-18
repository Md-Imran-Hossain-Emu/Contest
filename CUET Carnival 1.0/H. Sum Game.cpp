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

vector<int>v;

int calcSum(int arr[], int n, int k, int cnt)
{
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < k + i; j++)
            sum += arr[j];
        if(sum == cnt)
            return 1;
    }
    return 0;
}
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
        cout << "CASE " << ttt << ": ";
        solvetoo();
    }
}

void solvetoo()
{
    int n, m;
    cin >> n >> m;

    vector<int>v;
    int arr[n];
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int cntt = 0;
        for(int i=0;i<s.size();i++){
            cntt += (s[i] - 'a' + 1);
        }
        v.push_back(cntt);
        arr[i] = cntt;
    }

    if(calcSum(arr,n,4,m))
        cout << "YES\n";
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
