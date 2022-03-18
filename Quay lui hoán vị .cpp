#include<iostream>
using namespace std;
void input(int* used, int n) {
	for (int i = 1; i <= n; i++) {
		used[i] = 0;
	}
}
void Try(int i,int* a,int* used, int n) {
	for (int j = 1; j <= n; j++) {
		if (used[j] == 0) {//tức chưa được sử dụng
			used[j] = 1;//sau khi được sử dung thì có kí hiệu là 1 
			a[i] = j;
			if (i == n) {
				for (int x = 1; x <= n; x++) {
					cout << a[x] << " ";
				}cout << endl;
			}
			else {
				Try(i + 1, a, used, n);
			}
			//ket thúc vòng lặp của cái thứ j==n hoặc xuất xong
			used[j] = 0;

		}
	}
}
int main() {
	int n; cin >> n;
	int* used = new int[n+1];
	for (int i = 1; i <= n; i++) {
		used[i] = 0;
	}
	int* a = new int[n+1];
	Try(1, a, used, n);
	system("pause");
	return 0;
}
