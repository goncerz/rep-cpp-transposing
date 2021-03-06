#include <iostream>
#include <ctime>
#include "header.h"
using namespace std;

int main(void) {
	int n = 0;
	int m = 0;
	int** A = NULL;
	int** B = NULL;
	time_t t;

	srand(time(&t));

	do {
		cout << "Podaj liczbe wierszy macierzy A: ";
		cin >> n;
	} while (n < 1);

	do {
		cout << "Podaj liczbe kolumn macierzy A: ";
		cin >> m;
	} while (m < 1);
	cout << endl;

	A = createMatrix(n, m);
	cout << "Macierz A:" << endl;
	printMatrix(A, n, m);
	cout << endl;

	B = transposeMatrix(A, n, m);
	cout << "Transpozycja macierzy A:" << endl;
	printMatrix(B, m, n);
	cout << endl;

	deleteMatrix(A, n);
	deleteMatrix(B, m);

	return 0;
}