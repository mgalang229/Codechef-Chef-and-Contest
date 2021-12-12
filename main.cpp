#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, p, q;
		cin >> x >> y >> p >> q;
		// simply check which time is less (or if they have equal time)
		int chef = x + (10 * p);
		int chefina = y + (10 * q);
		string ans = "Draw";
		if (chef < chefina) {
			ans = "Chef";
		} else if (chef > chefina) {
			ans = "Chefina";
		}
		cout << ans << '\n';
	}
	return 0;
}