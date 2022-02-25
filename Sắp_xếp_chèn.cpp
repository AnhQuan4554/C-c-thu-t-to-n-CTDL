#include<iostream>
using namespace std; 
#include<cmath>
void input(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void insertionSort(int* a, int n) {
//dua phan tu lon hon ve dung vi tri cua no
	for (int i = 1; i < n; i++) {
		int x = a[i];//phải đặt như này bì nếu ko sau vòng lặp while
		//a[i] sẽ mang giá trị khác vì a[j+1]=a[i] rồi 
		int j = i - 1;
		while (x < a[j] && j >= 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j+1 ] = x; // vì trường hợp khi đôi rồi j vẫn trừ ví dụ 2 1 3 , 
		// 2 đẩy lên vị trí 1 rồi nhưng sau đó j-- 
		
	}
}
int main() {
	int n; cin >> n;
	int a[100];
	input(a, n);
	insertionSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}
