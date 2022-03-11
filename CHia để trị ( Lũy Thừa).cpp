#include<iostream>
using namespace std;
const long long modu = 1e9+7;
long long Luy_thua(long long a, long long b) {
	long long result = 1;
	while (b) {
		if (b % 2 == 1) {
			result *= a;
			result %= modu;
		}
		b /= 2;

		a *= a;
		a %= modu;
	}return  result;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		cout << Luy_thua(a, b) << endl;
	}
	system("pause");
	return 0;

}
