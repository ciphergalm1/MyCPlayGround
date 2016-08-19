#include<iostream>

using namespace std;

// traverse the tree list and set the point to false;
void removeTrees(bool treeList[], int startPos, int endPos) {
	for (int i = startPos; i <= endPos; i++) {
		treeList[i] = false;
	}
}

int countTrees(bool treeList[], int length) {
	int treeCount = 0;
	for (int i = 0; i < length;i++) {
		if (treeList[i] == true) {
			treeCount++;
		}
	}
	return treeCount;
}

int main() {
	// definition for length and cuting time
	int length, count;
	cin >> length >> count;

	bool* treeList = new bool[++length];
	for (int i = 0; i < length;i++) {
		treeList[i] = true;
	}

	// start inputing the data
	for (int i = 0; i < count; i++) {
		int startPos, endPos;
		cin >> startPos >> endPos;
		removeTrees(treeList , startPos, endPos);
	}

	int resultCount = countTrees(treeList, length);
	cout << resultCount << endl;
	delete[] treeList;

	return 0;
}