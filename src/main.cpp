#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y, r;
	cin >> x >> y >> r;

	cout << x - r << ' ' << y + r << '\n'
		<< x - r << ' ' << y - r << '\n'
		<< x + r << ' ' << y - r << '\n'
		<< x + r << ' ' << y + r;

	return 0;
}