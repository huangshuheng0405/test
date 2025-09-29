#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int ans = (c - a) * 60 + (d - b);
    std::cout << ans / 60 << " " << ans % 60 << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t = 1;

    // std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}