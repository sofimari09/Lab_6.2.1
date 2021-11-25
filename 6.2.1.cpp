#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Max(int* a, const int size)
{
	int indexMax=0;
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max)
		{
			max = a[i];
			indexMax = i;
		}
	return indexMax;
}
int Min(int* a, const int size)
{
	int indexMin=0;
	int min = a[0];
	for (int k = 1; k < size; k++)
		if (a[k] < min)
		{
			min = a[k];
			indexMin = k;
		}
	return indexMin;
}
int sum(int x, int y)
{
	return x + y;
}

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
    const int n=10;
	int a[n];

	int Low;
	cout << "Low="; cin >> Low;
	int High;
	cout << "High="; cin >> High;
	Create(a, n, Low, High);
	Print(a, n);
	int c = sum(Max(a,n), Min(a,n));
	cout << "indexMax = " << Max(a, n) << endl;
	cout << "indexMin = " << Min(a, n) << endl;
    cout << "ave:" << 1.*(c)/2 << endl;
	return 0;
}