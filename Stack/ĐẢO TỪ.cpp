#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;
int main() {
	int t;
	cin >> t;
	
	cin.ignore();
	while (t--) {
		stack<string>a;
		string x;
		getline(cin, x);
		stringstream ss(x);
		string trung_gian;
		while (ss >> trung_gian) {
			a.push(trung_gian);
		}
		while (!a.empty()) {
			cout << a.top() << " ";
			a.pop();
		}cout << endl;
	}
	system("pause");
	return 0;
}
