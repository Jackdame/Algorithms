#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

const double EPS = 1e-11;

double x[100005], y[100005];
int n;
long long w;

double check(double lambda) {
    double total_t = 0;
    // 预计算，避免多次开方
    double factor = lambda / sqrt(1.0 - lambda * lambda); 
    for (int i = 0; i < n; ++i) {
        double t = y[i] - x[i] * factor;
        if (t > 0) total_t += t;
    }
    return total_t;
}

void solve() {
    cin >> n >> w;
    for (int i = 0; i < n; ++i) cin >> x[i] >> y[i];

    double l = 0, r = 1.0;
    // 二分 100 次保证精度
    for (int i = 0; i < 100; ++i) {
        double mid = (l + r) / 2.0;
        if (check(mid) > (double)w) l = mid;
        else r = mid;
    }

    double ans = 0;
    double factor = r / sqrt(1.0 - r * r);
    for (int i = 0; i < n; ++i) {
        double t = y[i] - x[i] * factor;
        if (t < 0) t = 0;
        if (t > y[i]) t = y[i];
        ans += sqrt(x[i] * x[i] + (y[i] - t) * (y[i] - t));
    }
    cout << fixed << setprecision(10) << ans << endl;
}

int main() {
    solve();
    return 0;
}