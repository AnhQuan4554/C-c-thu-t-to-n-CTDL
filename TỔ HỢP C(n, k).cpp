#include<iostream>
#include<set>
using namespace std;
#include<deque>
#include<algorithm>

typedef long long ll;
ll modu = 1e9 + 7;
ll a[1005][1005];
void To_hop() {
	for (int i = 0; i <= 1001; i++) {
		
		for (int j = 0; j <= i; j++) {
			if (i == j || j == 0)a[i][j] = 1;
			else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			a[i][j] %= modu;
		}
	}
}
int main() {
	To_hop();
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << a[n][k] << endl;
	}
	system("pause");
	return 0;
}
