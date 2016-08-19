#include<iostream>
#include<string>

using namespace std;

int main() {
	int charCount[26];
	for (int i = 0; i < 26; i++) {
		charCount[i] = 0;
	}
	// set n*m matrix and p for word count
	int n, m, p;
	cin >> n >> m >> p;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < temp.size(); j++) {
			char inputChar = temp[j];
			charCount[int(inputChar - 'A')]++;
		}
	}

	for (int i = 0; i < p; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < temp.size(); j++) {
			char removeChar = temp[j];
			charCount[int(removeChar - 'A')]--;
		}
	}

	// output the answer
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < charCount[i]; j++) {
			cout << char(i + 'A');
		}
	}

	cout << endl;

	// test traverse
	/*
	for (int x = 0; x < 26; x++) {
		cout << char(x + 'A') << ' ' << charCount[x] << endl;
	}
	*/
	return 0;
}