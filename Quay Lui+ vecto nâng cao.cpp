#include<iostream>
using namespace std;
#include<algorithm>
#include<set>
#include<vector>
void input(set<string>& b, vector<pair<int, string>>&a, int n) {
	for (int i = 1; i <= n; i++) {
		string x; cin >> x;
		b.insert(x);
	}
	int index = 1;
	for (auto i : b) {
	a[index].first = index;
	a[index].second = i;
	index++;
	}
}
void khoitao(int * c, int k) {
	for (int i = 1; i <= k; i++) {
		c[i] = i;
	}
}
void Try(int i, int* c,vector<pair<int,string>>&b, int n,int k) {
	for (int j = c[i-1]+1; j <=n-k+i; j++) {
		c[i] = j;
		if (i == k) {
			for (int x = 1; x <= k; x++) {
				//cout << c[x] << " ";
				cout << b[c[x]].second << " ";
			}cout << endl;
		}
		else Try(i + 1, c, b, n,k);
	}
}

int main() {
		int n,k; cin >> n>>k  ;
		set<string>b;
		vector<pair<int, string>>a(n);//chả qua cái số lượng không phải là n thôi 
		input(b, a, n);
		int* c = new int[n];
		khoitao(c, k);
		c[0] = 0;
		/*for (int i = 1; i <=b.size(); i++) {
			cout << a[i].first <<" "<< a[i].second << endl;
		}*/
		Try(1, c,a,b.size(),k);
	
	system("pause");
	return 0;
}
