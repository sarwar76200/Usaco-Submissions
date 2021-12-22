#include <bits/stdc++.h>

using namespace std;
#define dbg(x)  " ["#x << ": " << x << "] "
#define len(x)  (int) x.size()
const double eps = 1e-9;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);


    int xa1, xa2, ya1, ya2;
    cin >> xa1 >> ya1 >> xa2 >> ya2;

    int xb1, xb2, yb1, yb2;
    cin >> xb1 >> yb1 >> xb2 >> yb2;

    int xc1, xc2, yc1, yc2;
    cin >> xc1 >> yc1 >> xc2 >> yc2;

    int area = (xa2 - xa1) * (ya2 - ya1) + (xb2 - xb1) * (yb2 - yb1);


    // x overlap with first
    int xf = max(0, min(xc2, xa2) - max(xa1, xc1));
    // x overlap with second
    int xs = max(0, min(xc2, xb2) - max(xb1, xc1));

    // y overlap with first
    int yf = max(0, min(yc2, ya2) - max(ya1, yc1));
    // y overlap with second
    int ys = max(0, min(yc2, yb2) - max(yb1, yc1));

    // area overlap with first
    int af = xf * yf;
    // area overlap with second
    int as = xs * ys;

    cout << area - (af + as) << '\n';

    return 0;
}
