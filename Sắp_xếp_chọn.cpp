#include<iostream>
using namespace std; 
#include<cmath>
void input(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void selectionSort(int* a, int n) {

	for (int i = 0; i < n; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[min_index] > a[j]) {
				min_index = j;
			}
		}
		swap(a[min_index], a[i]);

	}
}
int main() {
	int n; cin >> n;
	int a[100];
	input(a, n);
	selectionSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}
