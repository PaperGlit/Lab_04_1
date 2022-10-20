// Lab_04_1.cpp
// Лазар Владислав
// Лабораторна робота No 4.1
// Цикли.
// Варіант 11

#include <iostream>
using namespace std;

int main()
{
	int k, N;
	double S;

	cout << "N = "; cin >> N;

	S = 0;
	k = 1;

	while (k <= N)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	}

	cout << S << endl;

	S = 0;
	k = 1;

	do {
		S += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	} while (k <= N);

	cout << S << endl;

	S = 0;

	for (k = 1; k <= N; k++)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
	}

	cout << S << endl;

	S = 0;

	for (k = N; k >= 1; k--)
	{
		S += (1 + sqrt(1 + k * k)) / (k * k);
	}

	cout << S << endl;

	return 0;
}