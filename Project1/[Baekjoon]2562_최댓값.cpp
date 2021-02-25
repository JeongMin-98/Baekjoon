#include<iostream>
using namespace std;

int main() {
	int a[9];
	int max = 0;
	int maxnum;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 9; i++) {
		if (max < a[i]) {
			max = a[i];
			maxnum = i + 1;
		}
	}

	cout << max << "\n" << maxnum;

}