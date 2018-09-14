#include <iostream>
using namespace std;

int** createMatrix(int n, int m) {
	int** A = NULL;
	A = new int*[n];

	for (int i = 0; i < n; i++) {
		*(A + i) = new int[m];

		for (int j = 0; j < m; j++) {
			*(*(A + i) + j) = -9 + rand() % 19;
		}
	}

	return A;
}


void printMatrix(int** A, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout.width(4);
			cout << *(*(A + i) + j) << " ";
		}
		cout << endl;
	}
}


void deleteMatrix(int** A, int n) {
	for (int i = 0; i < n; i++) {
		delete[] * (A + i);
	}

	delete[] A;
	A = NULL;
}


int** transposeMatrix(int** A, int n, int m) {
	int** B = NULL;
	B = new int*[m];

	for (int i = 0; i < m; i++) {
		*(B + i) = new int[n];

		for (int j = 0; j < n; j++) {
			*(*(B + i) + j) = *(*(A + j) + i);
		}
	}

	return B;
}