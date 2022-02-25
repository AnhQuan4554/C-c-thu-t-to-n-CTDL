#include<iostream>
using namespace std; 
#include<cmath>
void input(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void bubbleSort(int* a, int n) {
	for (int i = 0; i < n; i++) {
		int check = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				check = 1;
			}
		}
		/*for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}cout << endl;*/
		if (check == 0)break;
	}
}
int main() {
	int n; cin >> n;
	int a[100];
	input(a, n);
	bubbleSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}
