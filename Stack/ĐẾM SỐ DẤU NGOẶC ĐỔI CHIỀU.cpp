#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	
	cin.ignore();
	while (t--) {
		stack<int>a;
		string x;
		getline(cin, x);
		for (int i = 0; i < x.length(); i++) {
			if (x[i] == ')' && !a.empty()) {
				if (a.top() == '(')a.pop();
				else a.push(x[i]);
			}
			else {
				a.push(x[i]);
			}
		}
		int n = 0;
		int k = a.size();
		while (a.size() && a.top() == '(') {
			n++;
			a.pop();
		}
		cout << k / 2 +( n % 2) << endl;


	}
	system("pause");
	return 0;
}
