#include<iostream>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	int a[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = a[0], max = a[0];
	for (int i = 1; i < n; i++) {
		sum += a[i];
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}
	cout << "最大值为：" << max << endl;
	cout << "最小值为：" << min << endl;
	cout << "和为：" << sum;
	return 0;
}
;