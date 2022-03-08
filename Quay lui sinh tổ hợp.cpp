#include<iostream>
using namespace std;

void input(int* a, int k) {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void Try(int i, int* a, int n, int k) {
	
	for (int j = a[i -1]+1; j <= n - k + i; j++) {
		a[i] = j;
		if (i == k) {
			for (int x = 1; x <= k; x++) {
				cout << a[x] << " ";
			}cout << endl;
		}
		else {
			Try(i + 1, a, n, k);
		}
	}
}
int main() {
	int a[1000];
	int n,k; cin >> n>>k;
	input(a, k);
	a[0] = 0;
	Try(1, a, n, k);
	
	system("pause");
	return 0;
}
