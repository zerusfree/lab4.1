#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N;
	double P;
	cout << "k = "; cin >> k;
	P = 1;
	N = k;
	while (k <= 19)
	{
		P *= 1. * (k - N) / (k + N) + 1;
			k++;
	}
	cout << P << endl;
		P = 1;
	N = k;
	do {
		P *= 1. * (k - N) / (k + N) + 1;
		k++;
	} while (k <= 19);
	cout << P << endl;
	P = 1;
	for (N = k; k <= 19; k++)
	{
		P *= 1. * (k - N) / (k + N) + 1;
	}
	cout << P << endl;
	P = 1;
	for (k = 19;k >= N;k--)
	{
		P *= 1. * (k - N) / (k + N) + 1;
	}
	cout << P << endl;
	return 0;
}