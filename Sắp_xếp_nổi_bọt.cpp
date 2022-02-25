#include<iostream>
using namespace std; 
#include<cmath>
void input(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void bubbleSort(int* a, int n) {
//dua phan tu lon hon ve dung vi tri cua no
	for (int i = 0; i < n-1; i++) {
		
		for (int j = 0; j < n-i-1; j++) {//sau moi buoc so sanh thi doi cho luon 
			if (a[j] > a[j+1]) {
				swap(a[j + 1], a[j]);
			}
		}

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
