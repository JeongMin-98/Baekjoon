#include<iostream>

using namespace std;

int main() {
	int length;
	int min, max;
	cin >> length;
	int* array = new int[length];
	
	for (int i = 0; i < length; i++) {
		cin >> array[i];
	}

	min = 1e6;
	max = -1e6;
	for (int i = 0; i < length; i++) {
		if (min > array[i])
			min = array[i];
		if (max < array[i]) {
			max = array[i];
		}
	}

	cout << min << " " << max;
}