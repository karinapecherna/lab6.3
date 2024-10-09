#include <iostream>
#include <iomanip>
using namespace std;
void Sort(int* a, const int size) 
{
	for (int i = 0; i < size - 1; i++) 
	{
	int min = a[i]; 
		int imin = i; 
		for (int j = i + 1; j < size; j++)
			if (min > a[j])
			{
				min = a[j];
				imin = j;
			}
		a[imin] = a[i]; 
		a[i] = min; 
	}
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int main()
{
	const int n = 10;
	int a[n] = { 9, 3, 7, 5, 8, 8, 5, 7, 4, 11 };
	Print(a, n);
	Sort(a, n);
	Print(a, n);
	return 0;
}