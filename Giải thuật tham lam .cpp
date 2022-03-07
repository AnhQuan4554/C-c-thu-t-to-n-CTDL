
﻿#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int a[11] = {1,2,5,10,20,50,100,200,500,1000};
		int money; cin >> money;
		int count = 0;
		for (int i = 9; i >=0; i--) {
			count += money / a[i];
			money = money % a[i];
		}
		cout << count << endl;
	}
	system("pause");
	return  0;
}
