#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

const int maxn = (int)3e5 + 3;
const int maxa = (1 << 20) + 3;


int n;
int a[maxn];
int cnt[2][maxa];


int32_t main() {
    std::ios_base::sync_with_stdio(false);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    cnt[1][0] = 1;
    int x = 0;
    int64_t res = 0;
    for(int i = 0; i < n; ++i) {
        x ^= a[i];
        res += cnt[i % 2][x];
        ++cnt[i % 2][x];
    }
    cout << res << endl;
    return 0;
}
