#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i, k;
	double S, P;

	P = 1;
	i = 1;
	while (i <= 15) {
		S = 0;
		k = 1;
		while (k <= i) {
			S += 1. / k;
			k++;
		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
		i++;
	}
	cout << "P: " << P << endl;
	P = 1;
	i = 1;
	do {
		S = 0;
		k = 1;
		do {
			S += 1. / k;
			k++;
		} while (k <= i);
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
		i++;
	} while (i <= 15);
	cout << "P: " << P << endl;

	P = 1;
	for (i = 1; i <= 15; i++) {
		S = 0;
		for (k = 1; k <= i; k++) {
			S += 1. / k;
		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
	}
	cout << "P: " << P << endl;

	P = 1;
	for (i = 15; i >= 1; i--) {
		S = 0;;
		for (k = i; k >= 1; k--) {
			S += 1. / k;
		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
	}
	cout << "P: " << P << endl;
	return 0;
}