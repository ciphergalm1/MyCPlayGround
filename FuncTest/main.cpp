#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<random>

using namespace std;

int calAB(int a,int b) {
	return a + b;
}

void MySort(void *base, size_t numberOfElements, size_t elementSize, int ( *myCompare)( const void* elem1,const void* elem2)) {

}

int MyCompare(const void * elem1, const void * elem2 ) {
	unsigned int *target1, *target2;
	target1 = (unsigned int*)elem1;
	target2 = (unsigned int*)elem2;
	return *target2 - *target1;
}

const int LENGTH = 10;

int main() {
	unsigned int numList[LENGTH];
	random_device rd;
	mt19937 mt;
	mt.seed(rd());
	uniform_int_distribution<> diff(1,100);
	for (int i = 0; i < LENGTH; i++) {
		numList[i] = diff(mt);
	}

	qsort(numList, LENGTH, sizeof(unsigned int),MyCompare);

	for (int i = 0; i < 10; i++) {
		cout << numList[i] << " ";
	}

	cout << endl;
	

	return 0;
}