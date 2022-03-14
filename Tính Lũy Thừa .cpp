#include<iostream>
using namespace std;
const long long modu = 1e9 + 7;
long long Luy_thua(long long a, long long b) {
	if (b == 0)return 1;
	long long x = Luy_thua(a, b / 2);
	if (b % 2 == 0) {
		return (x * x) % modu;
	}
	else {
		return ((x * x) % modu * a) % modu;
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << Luy_thua(a, b);
		system("pause");
		return 0;
}
