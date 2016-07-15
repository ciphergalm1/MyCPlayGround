#include<iostream>
#include<random>

using namespace std;

void printBiArray(int** head, int rows, int columns) {
	//using pointer to traverse
	for (int **row = head; row != head+ rows; row++) {
		for (int *p = *row; p != *row + columns; p++) {
			cout << *p ;
			cout << ' ';
		}
		cout << endl;
	}
}

int main() {
	// input: a binary data array with its address , rows and columns
	// output: print all values

	int rows, columns;
	cout << "Please enter the rows and columns for your array:" << endl;
	cin >> rows >> columns;
	int** numList = new int*[rows];
	for (int i = 0; i < rows; i++) {
		numList[i] = new int[columns];
	}

	// random generate the data in the array
	random_device rd;
	mt19937 myGen;
	myGen.seed(rd());
	uniform_int_distribution<> diff(1,50);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			numList[i][j] = diff(myGen);
			cout << numList[i][j];
			cout << ' ';
		}
		cout << endl;
	}

	
	printBiArray(numList,rows,columns);

	for (int i = 0; i < rows; i++) {
		delete[] numList[i];
	}
	delete[] numList;
	return 0;
}