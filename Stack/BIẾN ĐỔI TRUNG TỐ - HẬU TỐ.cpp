#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;
int STT(char x) {
	if (x == '^')return 5;
	else if (x == '*' || x == '/')return 4;
	else if (x == '+' || x == '-')return 3;
	return 2;//truong hop cho dau'('
}
int main() {
	int t;
	cin >> t;
	
	cin.ignore();
	while (t--) {
		stack<char>a;
		string x,res;
		cin >> x;
		for (int i = 0; i < x.length(); i++) {
			if (x[i] >= 65 && x[i] <= 90)res += x[i];
			else if (x[i] >= 97 && x[i] <= 122)res += x[i];
			else if (x[i] == '(')a.push(x[i]);
			else if (x[i] == ')') {
				while (!a.empty() && a.top() != '(') {
					res += a.top();
					a.pop();
				}a.pop();//xoa '(' de xet cac cap khac
			}
			else if (x[i] == '+' || x[i] == '-' || x[i] == '*' || x[i] == '/' || x[i] == '^') {
				while (!a.empty() && STT(a.top()) >= STT(x[i])) {
					res += a.top();
					a.pop();
				}
				a.push(x[i]);
			}
		}
		/////con bao nhieu nhoi het vao cuoi
		while (!a.empty()) {
			if (a.top() != '(')res += a.top();
			a.pop();
		}cout << res << endl;
	}
	system("pause");
	return 0;
}
