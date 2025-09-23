#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    i64 n;
    std::cin >> n;

    std::vector<std::array<i64, 2>> a(n);
    std::vector<i64> b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i][0];
        a[i][1] = 1LL * i * (n - i);
    }

    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    std::sort(a.begin(), a.end(), [&](auto x, auto y) {
        return 1LL * x[0] * x[1] > 1LL * y[0] * y[1];
    });

    std::sort(b.begin(), b.end());

    i64 ans = 0;
    constexpr int mod = 998244353;
    for (int i = 0; i < n; i++) {
        ans = (ans + 1LL * a[i][0] * a[i][1] % mod * b[i] % mod) % mod;
    }

    std::cout << ans << "\n";

    return 0;
}