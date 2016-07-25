#include<iostream>

using namespace std;

int main() {
	int count, number;
	int resultMin,resultMax;
	cin >> count;
	//pair<int, int> test;
	pair<int, int> *list = new pair<int, int>[count];
	for (int i = 0; i < count; i++) {
		cin >> number;
		if (number%4 ==0) {
			resultMin = number / 4;
			resultMax = number / 2;
		}
		else if(number%2==0) {
			resultMin = number / 4 + 1;
			resultMax = number / 2;
		}
		else {
			resultMin = 0;
			resultMax = resultMin;
		}

		cout << resultMin << ' '<< resultMax << endl;
		list[i].first = resultMin;
		list[i].second = resultMax;
	}

	for (int j = 0; j < count; j++) {
		cout << list[j].first << ' ' << list[j].second << endl;
	}

	delete[] list;

}