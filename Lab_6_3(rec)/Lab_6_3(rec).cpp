// Lab_6_3.cpp
// Козубенко Андрій
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 10
// Рекурсивний спосіб
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

void CreateArray(int *a, const int size, const int i);
void PrintArray(int *a, const int size, const int i);
int MinElem(int *a, const int size, int min, const int i);

int main()
{
	int n;

	cout << "How many elements should a new array consist of?\n";
	cout << "n = "; cin >> n;

	if (n <= 0)
	{
		std::cerr << "Number of elements in an array should be > 0";
		return -1;
	}

	int *a = new int[n];

	CreateArray(a, n, 0);
	PrintArray(a, n, 0);

	cout << "Minimal element = " << MinElem(a, n, a[0], 1) << endl;

	delete[] a;
	return 0;
}

void CreateArray(int *a, const int size, const int i)
{
	cout << "a[" << i << "] = "; cin >> a[i];
	if (i < size - 1)
		CreateArray(a, size, i + 1);
}

void PrintArray(int *a, const int size, const int i)
{
	if (i == 0)
		cout << "a = " << "{";

	if (i < size)
	{
		cout << setw(4) << a[i];
		if (i != size - 1)
			cout << ",";

		PrintArray(a, size, i + 1);
	}
	else
		cout << " }\n";
}

int MinElem(int *a, const int size, int min, const int i)
{
	if (i < size)
	{
		if (a[i] < min)
			min = a[i];

		return MinElem(a, size, min, i + 1);
	}
	else
		return min;
}