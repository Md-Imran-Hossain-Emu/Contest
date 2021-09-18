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
    cout << fixed << setprecision(5);
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
    int n, box;
    string s;
    cin >> n >> s >> box;
    box--;
    int red[n], green[n], blue[n];
    int boxsum[n] = {0};
    for(int i=0;i<n;i++){
        cin >> red[i] >> green[i] >> blue[i];
        int bs = red[i] + green[i] + blue[i];
        boxsum[i] = bs;
    }
    if(s == "red"){
        float upper = (float)red[box] / (float)boxsum[box];
        float lower = 0.0;
        for(int i=0;i<n;i++){
            lower += ((float)red[i] / (float)boxsum[i]);
        }
        cout << upper/lower << endl;
    }
    else if(s == "green"){
        float upper = (float)green[box] / (float)boxsum[box];
        float lower = 0.0;
        for(int i=0;i<n;i++){
            lower += ((float)green[i] / (float)boxsum[i]);
        }
        cout << upper/lower << endl;
    }
    else if(s == "blue"){
        float upper = (float)blue[box] / (float)boxsum[box];
        float lower = 0.0;
        for(int i=0;i<n;i++){
            lower += ((float)blue[i] / (float)boxsum[i]);
        }
        cout << upper/lower << endl;
    }

}

///Must see the constraints range
///Calculate the Time
