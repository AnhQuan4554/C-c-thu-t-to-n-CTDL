#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n, s = 0;
    cin >> n;
    vector<int> a(n + 5), f(n + 5, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        f[a[i]] = f[a[i] - 1] + 1;
        s = max(s, f[a[i]]);
      
    }
    cout << n - s;
	system("pause");
	return 0;
}
