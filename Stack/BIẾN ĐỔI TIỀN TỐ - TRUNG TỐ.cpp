#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	
	cin.ignore();
	while (t--) {
		stack<string>a;
		string x;
		cin >> x;
		for (int i = x.length()-1; i >=0; i--) {
			if (x[i] == '+' || x[i] == '-' || x[i] == '*' || x[i] == '/') {
				string firt = a.top(); a.pop();
				string second = a.top(); a.pop();
				string trung_gian = '(' + firt +x[i]+ second + ')';
				a.push(trung_gian);
			}
			else {
				a.push(string(1, x[i]));
			}
		}cout << a.top() << endl;
	}
	system("pause");
	return 0;
}
